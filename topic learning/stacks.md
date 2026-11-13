# Stacks — learning state

Topic 28 in `problem list/order.md`. Problems: `problem list/stacks/understand.md`.
Last session: 2026-11-13. Toolchain checked: g++ (GCC) 16.2.1, libstdc++
`bits/stl_stack.h`.

## How to resume

Start the next session with:

```
/socratic-tutor resume stacks from "topic learning/stacks.md"
```

Skills used so far:

| Skill | Source | Why |
|---|---|---|
| `socratic-tutor` | `~/.claude/skills/socratic-tutor` (dotfiles) | the whole session; question-first teaching, skill map, spaced review |

No other plugin was used. The `research-superpowers` plugin loads at session
start but is not relevant to this topic.

## Skill map

```
Topic: stacks with the C++ STL              overall: ██████░░░░  60%
-----------------------------------------------------------------
1 LIFO model + when a stack is the tool   [████████░░]  4/5  * independent
2 std::stack API + empty-stack trap       [██████████]  5/5  * can teach it
3 bracket matching (the core pattern)     [████████░░]  4/5  * independent
4 stack of indices, not values            [██░░░░░░░░]  1/5  parked
5 parsing / nested state (decode, RPN)    [░░░░░░░░░░]  0/5
6 same-pass extra state (min-stack)       [░░░░░░░░░░]  0/5
-----------------------------------------------------------------
0 unaware . 1 heard of it . 2 can follow . 3 can do with help
4 can do independently . 5 can teach it / handle edge cases
```

Target level: 4/5 on every subskill.

## What is settled

### `top()` and `pop()` are split

- `top()` reads the top item, removes nothing.
- `pop()` removes the top item, returns `void`.
- Reading and removing is always two calls: `char c = s.top(); s.pop();`

`char c = s.pop();` fails to compile. The real error, measured:

```
error: void value not ignored as it ought to be
    7 |     char c = s.pop();
```

Why split: a returning `pop()` would copy the item out *after* shrinking the
stack. If that copy threw, the item is already gone and the caller never got
it — lost. Copy first, remove second, and nothing can be lost.

```
hypothetical  T pop()        real C++
--------------------------   -------------------------
1 remove top from container  1 c = s.top()   <- copy FIRST
2 copy into return value     |    throws? stack untouched
  |  throws here?            2 s.pop()       <- remove
  v  item already gone       |    cannot throw
  => ITEM LOST FOREVER       v  => nothing can be lost
```

Everyday version: a clerk holds the only copy of your form. "Shred it, then
hand you the photocopy" loses the form if the copier jams. "Photocopy first,
then shred" costs nothing.

"Throws" = raises an exception. Only the copy can throw, and only when copying
allocates: `stack<int>` never throws, `stack<string>` can throw `bad_alloc`.
You never write `try/catch` in contest code — the only takeaway is the rule.

### `top()` on an empty stack is undefined behaviour

No check is performed. Measured here:

```
[1]    194238 segmentation fault (core dumped)  ./yo
```

It may also print garbage or appear to work. The guard is yours to write:
`if (s.empty()) return false;` before every `top()`.

### `!s.empty()` vs `s.empty()`

`while (s.empty())` is the inverted condition. `!s.empty()` and
`s.size() != 0` are the same thing.

### `const std::string& t` as a parameter

- `string t` — the function gets its own copy of every character.
- `string& t` — the function gets the address. No copy.
- `const` — a promise not to change it.

```
string t  (copy)                const string& t  (reference)
caller:  "([)]"                 caller:  "([)]"
            |  copies 4 chars              ^
            v  (or 1,000,000)              |  8-byte address
func:    "([)]"                 func:  ---+
```

A plain `string&` cannot bind to a literal. `"([)]"` written in code has no
variable name, so C++ builds a nameless temporary that dies when the call
ends. `string&` means "I may write into it", and writing into something about
to die is always a bug, so the compiler refuses. `const string&` only reads,
so it is allowed.

```cpp
void f(std::string& s);        f("([)]");  // error
void g(const std::string& s);  g("([)]");  // fine
```

Use `const std::string&` for any parameter you only read.

### Bracket matching — the pattern

A `+1 / -1` counter cannot do this job. It calls `([)]` valid, because it
throws away bracket *type*. The fact a closer needs is **the type of the
nearest still-unmatched opener**. That is what a stack remembers.

Rules:

- opener `( [ {` → `push`
- closer `) ] }` → if `s.empty()` invalid; else `top()` must be the partner;
  if not, invalid; if it is, `pop()`
- end of string → valid only if `s.empty()`

```
"([])"
char   action                    stack (top on right)
(      opener -> push            (
[      opener -> push            ( [
]      closer, top='[' matches   (
)      closer, top='(' matches   (empty)
end    empty -> valid
```

Everyday version: nested brackets are interrupted tasks. You start `(`, get
interrupted by `[`, and must finish `[` before returning to `(`. The pile of
half-finished tasks is the stack.

Working solution (`valid-parentheses`):

```cpp
bool isValid(const string& t) {
    stack<char> s;
    for (char ele : t) {
        if (ele == '[' || ele == '{' || ele == '(') s.push(ele);
        else if (ele == ']' || ele == '}' || ele == ')') {
            if (s.empty()) return false;
            char ch = s.top();
            if ((ch == '[' && ele != ']') || (ch == '{' && ele != '}')
                || (ch == '(' && ele != ')')) return false;
            s.pop();
        }
    }
    return s.empty();
}
```

Test set and expected output: `"([)]"` 0, `"()[]{}"` 1, `")"` 0, `"("` 0,
`"(("` 0, `")]"` 0, `""` 1.

## Misconceptions to re-test without warning

| Wrong idea held | Correct fact | Re-test with |
|---|---|---|
| `char c = s.pop()` returns the item | `pop()` returns `void` | ask for the compile error |
| pop first, then read `top()` to compare | compare with `top()`, then `pop()` | trace `([)]` by hand |
| `while (s.empty())` loops over the stack | inverted; use `!s.empty()` | predict the body runs |
| a length check (`t.size() <= 1`) catches unbalanced input | `"()"` and `"(("` are both size 2; also wrongly rejects `""` | ask about `"(("` |
| `return true` at the end is enough | leftover openers → `return s.empty()` | ask about `"("` |
| a reset counter solves longest-valid-parentheses | fails `"(()"` (reports 3, answer 2) and `"()(()"` (reports 4, answer 2) | ask for the trace |
| compare adjacent characters pairwise | fails on nesting: in `"([])"` the pair `(` `[` is not a match but nothing is wrong | trace `"([])"` |

Pattern across the session: edge cases were found by **compiling and running**,
not by reasoning. Keep that habit; it is the one that worked.

## Subskill 4 — parked, resume here after subskill 5

Question: longest valid stretch, not just valid or not.

Why the character stack fails: with only one bracket type, every item is `(`,
so the stack carries no information. A length needs **positions**, so push the
index `i`, not `t[i]`. `stack<int>`.

Seed the stack with `-1` as a wall, meaning "a wall sits just before index 0".
`s.top()` is then always the index of the last wall, and
`i - s.top()` is the length from the wall to here.

```cpp
stack<int> s;
s.push(-1);
int ans = 0;
for (int i = 0; i < (int)t.size(); i++) {
    if (t[i] == '(') s.push(i);
    else {
        s.pop();
        if (s.empty()) s.push(i);          // that was the wall -> i is the new wall
        else ans = max(ans, i - s.top());
    }
}
```

```
"(()"
i  char  action                stack        ans
-  -     seed                  -1           0
0  (     push 0                -1 0         0
1  (     push 1                -1 0 1       0
2  )     pop -> -1 0           -1 0
         not empty             -1 0         max(0, 2-0) = 2
end                                         2   <- correct
```

Index 0 stays in the stack as the wall, so the unmatched `(` is excluded for
free.

Why pop before checking `empty()`: the popped item is either a real opener or
the wall, and you cannot tell which without popping. Empty after the pop means
you removed the wall, so this `)` is unmatched and becomes the new wall.

Why `top()` after the pop, not before: the matching opener is useless here
(only one bracket type). The fact needed is the item *underneath* it, and that
only becomes `top()` after the pop.

Why the `-1` seed: without it, `"()"` empties the stack and there is nothing to
subtract from, so you need a separate `int base` plus an `if` choosing between
the variable and the stack. The seed puts that variable inside the stack, so
`s.top()` is always valid and there is one code path.

Everyday version: a tape measure. The wall is the 0 mark hooked on the edge,
`i` is your finger, the answer is the difference. Subtraction remembers the
length, which is why there is no counter.

**Not yet earned.** The trace of `"()"` and `")()())"` was never done by hand.
Demand both before raising this above 1/5.

## Codeforces note (checked, not remembered)

One call to `https://codeforces.com/api/problemset.problems` confirms
**Codeforces has no `stack` tag.** The full tag list contains `data
structures` and `expression parsing`, no `stack`. Filtering `expression
parsing` to rating <= 1500 gives the usable set.

- https://codeforces.com/problemset/problem/612/C — Replace To Make Regular
  Bracket Sequence, 1400. The `isValid` function above almost unchanged:
  `<> {} [] ()`, print `Impossible` instead of returning false.
- https://codeforces.com/problemset/problem/32/B — Borze, 800. Plain string
  walking, a warm-up.

## Postfix and prefix notation — where they live

There is no separate topic for them. In `problem list/order.md` the only
`prefix` entries are **prefix sums** (#20) and **prefix function** (#36, KMP);
neither is about notation. Postfix sits inside the stacks topic:

- `evaluate-reverse-polish-notation` — reverse Polish notation **is** postfix.
  Medium, in `understand.md`.
- `basic-calculator-ii`, `basic-calculator` — infix, harder, same folder.
- `stacks/crazy.md` adds `parse-lisp-expression` (Lisp is prefix),
  `basic-calculator-iv`, `parsing-a-boolean-expression`.

Prefix notation never appears on its own in the list. It is rare in contests.

Postfix is the gentlest of the three parsing problems: no brackets and no
precedence, because the notation already encodes both.

## Next steps, in order

1. [ ] Submit `valid-parentheses` (drop the size check, return `bool`).
2. [ ] https://codeforces.com/problemset/problem/612/C
3. [ ] `remove-all-adjacent-duplicates-in-string` — teaches popping instead of
       pushing.
4. [ ] `baseball-game` — same loop, different payload.
5. [ ] `evaluate-reverse-polish-notation` — subskill 5, postfix.
6. [ ] `basic-calculator-ii` — infix and precedence.
7. [ ] `min-stack` — subskill 6, extra state carried in the same pass.
8. [ ] `longest-valid-parentheses` — unpark subskill 4; hand-trace first.

Observed habit to keep correcting: jumping from the first Easy problem
straight to a Hard one. Finish Easy, then Medium.
