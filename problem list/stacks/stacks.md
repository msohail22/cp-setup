# Stacks

## What a stack is

A stack holds items and gives back the **last one you put in** first. Two
operations: push (put on top) and pop (take off the top). Nothing else.

Everyday comparison: a pile of plates. You add to the top. You take from the top.
You never pull one out of the middle.

```
push 3   push 1   push 4     pop -> 4   pop -> 1
  |3|      |1|      |4|        |1|        |3|
           |3|      |1|        |3|
                    |3|
```

## Why contests use it

Two jobs, and almost every stack problem is one of them.

**Job 1 — matching pairs.** Brackets, tags, nested anything. Push an opener, pop
on a closer, check it matches. If the stack is empty when you need to pop, or not
empty at the end, the input is bad.

**Job 2 — the monotonic stack.** Find, for every item, the nearest bigger or
smaller item to its left or right. Keep the stack sorted as you go. Each item is
pushed once and popped once, so the whole scan is O(n), not O(n²).

The monotonic stack is the half that wins contests. Job 1 is a warm-up.

## How the monotonic stack works

Target: for each value, the nearest smaller value to its left.

```
input: 3 1 4 1 5

i=0 v=3  stack empty              -> answer 0, push 3   stack [3]
i=1 v=1  top 3 >= 1, pop          -> stack empty
                                  -> answer 0, push 1   stack [1]
i=2 v=4  top 1 < 4                -> answer 1, push 4   stack [1,4]
i=3 v=1  top 4 >= 1, pop          -> stack [1]
         top 1 >= 1, pop          -> stack empty
                                  -> answer 0, push 1   stack [1]
i=4 v=5  top 1 < 5                -> answer 1, push 5   stack [1,5]

answers: 0 0 1 0 1
```

```cpp
vector<int> nearest_smaller_left(const vector<int>& a) {
    vector<int> res(a.size(), -1);
    stack<int> st;                      // holds indices, values increasing
    for (int i = 0; i < (int)a.size(); i++) {
        while (!st.empty() && a[st.top()] >= a[i]) st.pop();
        if (!st.empty()) res[i] = st.top();
        st.push(i);
    }
    return res;
}
```

The one trap: decide **before you write the loop** whether the comparison is `>=`
or `>`. That single character decides how equal values are handled, and it is the
usual cause of a wrong answer on a test with duplicates.

---

## Block 0 — warm-up

Seven problems. Each needs the stack once, with no twist. Do these in one sitting.

| Done | Problem | Source | Level |
|---|---|---|---|
| [ ] | [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/) | LC 20 | Easy |
| [ ] | [Baseball Game](https://leetcode.com/problems/baseball-game/) | LC 682 | Easy |
| [ ] | [Backspace String Compare](https://leetcode.com/problems/backspace-string-compare/) | LC 844 | Easy |
| [ ] | [Remove All Adjacent Duplicates In String](https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/) | LC 1047 | Easy |
| [ ] | [Implement Queue using Stacks](https://leetcode.com/problems/implement-queue-using-stacks/) | LC 232 | Easy |
| [ ] | [Min Stack](https://leetcode.com/problems/min-stack/) | LC 155 | Medium |
| [ ] | [Bracket Matching](https://open.kattis.com/problems/bracketmatching) | Kattis | easy |

## Core set ★

Fifteen problems, one per mechanism. Solve these unaided and you own stacks.
Everything after this block is extra reps — see [../review-fable.md](../review-fable.md).

| Done | Problem | Source | Mechanism |
|---|---|---|---|
| [ ] ★ | [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/) | LC 20 | match pairs |
| [ ] ★ | [Simplify Path](https://leetcode.com/problems/simplify-path/) | LC 71 | push/pop as state |
| [ ] ★ | [Evaluate Reverse Polish Notation](https://leetcode.com/problems/evaluate-reverse-polish-notation/) | LC 150 | postfix evaluation |
| [ ] ★ | [Decode String](https://leetcode.com/problems/decode-string/) | LC 394 | nested structure |
| [ ] ★ | [Nearest Smaller Values](https://cses.fi/problemset/task/1645) | CSES 1645 | **the monotonic scan** |
| [ ] ★ | [Next Greater Element I](https://leetcode.com/problems/next-greater-element-i/) | LC 496 | next greater, right |
| [ ] ★ | [Next Greater Element II](https://leetcode.com/problems/next-greater-element-ii/) | LC 503 | same, circular array |
| [ ] ★ | [Daily Temperatures](https://leetcode.com/problems/daily-temperatures/) | LC 739 | distance to next greater |
| [ ] ★ | [Online Stock Span](https://leetcode.com/problems/online-stock-span/) | LC 901 | monotonic, streaming |
| [ ] ★ | [Largest Rectangle in Histogram](https://leetcode.com/problems/largest-rectangle-in-histogram/) | LC 84 | span between smaller values |
| [ ] ★ | [Maximal Rectangle](https://leetcode.com/problems/maximal-rectangle/) | LC 85 | histogram per row |
| [ ] ★ | [Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/) | LC 42 | bounded by both sides |
| [ ] ★ | [Sum of Subarray Minimums](https://leetcode.com/problems/sum-of-subarray-minimums/) | LC 907 | counting by contribution |
| [ ] ★ | [Replace To Make Regular Bracket Sequence](https://codeforces.com/problemset/problem/612/C) | CF 612C, 1400 | brackets, contest shape |
| [ ] ★ | [Longest Regular Bracket Sequence](https://codeforces.com/problemset/problem/5/C) | CF 5C, 1900 | stack plus index bookkeeping |

## More practice — easy

| Done | Problem | Source | Level |
|---|---|---|---|
| [ ] | [Remove Outermost Parentheses](https://leetcode.com/problems/remove-outermost-parentheses/) | LC 1021 | Easy |
| [ ] | [Make The String Great](https://leetcode.com/problems/make-the-string-great/) | LC 1544 | Easy |
| [ ] | [Build an Array With Stack Operations](https://leetcode.com/problems/build-an-array-with-stack-operations/) | LC 1441 | Medium |
| [ ] | [Crawler Log Folder](https://leetcode.com/problems/crawler-log-folder/) | LC 1598 | Easy |
| [ ] | [Final Prices With a Special Discount](https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/) | LC 1475 | Easy |
| [ ] | [Removing Stars From a String](https://leetcode.com/problems/removing-stars-from-a-string/) | LC 2390 | Medium |
| [ ] | [Brackets](https://open.kattis.com/problems/brackets) | Kattis | easy |
| [ ] | [Alternative Bracket Notation](https://open.kattis.com/problems/bracketnotation) | Kattis | easy |
| [ ] | [Stack and Queue](https://codeforces.com/problemset/problem/2011/I) | CF 2011I | unrated |

## More practice — medium

Codeforces rows are verified from the API, with the live rating.

| Done | Problem | Source | Level |
|---|---|---|---|
| [ ] | [Jatayu's Balanced Bracket Sequence](https://codeforces.com/problemset/problem/1726/C) | CF 1726C | 1300 |
| [ ] | [Balanced Tunnel](https://codeforces.com/problemset/problem/1237/B) | CF 1237B | 1300 |
| [ ] | [Stack of Presents](https://codeforces.com/problemset/problem/1279/C) | CF 1279C | 1400 |
| [ ] | [Balance (easy version)](https://codeforces.com/problemset/problem/1732/D1) | CF 1732D1 | 1500 |
| [ ] | [Bracket Sequence](https://codeforces.com/problemset/problem/223/A) | CF 223A | 1700 |
| [ ] | [Correct Bracket Sequence Editor](https://codeforces.com/problemset/problem/670/E) | CF 670E | 1700 |
| [ ] | [Imbalanced Array](https://codeforces.com/problemset/problem/817/D) | CF 817D | 1900 |
| [ ] | [Remove Nodes From Linked List](https://leetcode.com/problems/remove-nodes-from-linked-list/) | LC 2487 | Medium |
| [ ] | [Asteroid Collision](https://leetcode.com/problems/asteroid-collision/) | LC 735 | Medium |
| [ ] | [Car Fleet](https://leetcode.com/problems/car-fleet/) | LC 853 | Medium |
| [ ] | [132 Pattern](https://leetcode.com/problems/132-pattern/) | LC 456 | Medium |
| [ ] | [Remove K Digits](https://leetcode.com/problems/remove-k-digits/) | LC 402 | Medium |
| [ ] | [Bracket Sequence](https://open.kattis.com/problems/bracketsequence) | Kattis | medium |
| [ ] | [Bracket Pairing](https://open.kattis.com/problems/bracketpairing) | Kattis | medium |

## More practice — hard

| Done | Problem | Source | Level |
|---|---|---|---|
| [ ] | [Sereja and Brackets](https://codeforces.com/problemset/problem/380/C) | CF 380C | 2000 |
| [ ] | [Invertible Bracket Sequences](https://codeforces.com/problemset/problem/1976/D) | CF 1976D | 2000 |
| [ ] | [Stack Sorting](https://codeforces.com/problemset/problem/911/E) | CF 911E | 2000 |
| [ ] | [Bracket Walk](https://codeforces.com/problemset/problem/1838/D) | CF 1838D | 2100 |
| [ ] | [Nikita and stack](https://codeforces.com/problemset/problem/756/C) | CF 756C | 2200 |
| [ ] | [Changing Brackets](https://codeforces.com/problemset/problem/1593/G) | CF 1593G | 2200 |
| [ ] | [Balance (hard version)](https://codeforces.com/problemset/problem/1732/D2) | CF 1732D2 | 2400 |
| [ ] | [Bracket Cost](https://codeforces.com/problemset/problem/1750/E) | CF 1750E | 2400 |
| [ ] | [Double Bracket Sequence](https://codeforces.com/problemset/problem/2196/D) | CF 2196D | 2500 |
| [ ] | [Stack Exterminable Arrays](https://codeforces.com/problemset/problem/1223/F) | CF 1223F | 2600 |
| [ ] | [And Yet Another Bracket Sequence](https://codeforces.com/problemset/problem/524/F) | CF 524F | 2700 |
| [ ] | [Maximum Frequency Stack](https://leetcode.com/problems/maximum-frequency-stack/) | LC 895 | Hard |
| [ ] | [Longest Valid Parentheses](https://leetcode.com/problems/longest-valid-parentheses/) | LC 32 | Hard |
| [ ] | [Minimum Cost Tree From Leaf Values](https://leetcode.com/problems/minimum-cost-tree-from-leaf-values/) | LC 1130 | Medium |
| [ ] | [Enumerating Brackets](https://open.kattis.com/problems/enumeratingbrackets) | Kattis | hard |

---

Every remaining stack and monotonic-stack problem across the four judges is in
[stacks-full.md](stacks-full.md): 182 LeetCode problems by their real tags, plus
the Codeforces and Kattis matches.
