# Modulo / modular arithmetic

## What the topic is

Modulo is the remainder after a division. `17 mod 5 = 2`.
Answers in contests are often asked "modulo 1000000007" because the real answer
is too big for a 64-bit integer. So you take the remainder after every step
instead of at the end.

Everyday comparison: a 12-hour clock. 10 o'clock plus 5 hours is 3 o'clock, not
15. The clock works modulo 12.

## The four rules

```
(a + b) % m == ((a%m) + (b%m)) % m
(a - b) % m == ((a%m) - (b%m) + m) % m     <- the +m stops a negative result
(a * b) % m == ((a%m) * (b%m)) % m
(a / b) % m == (a%m) * inverse(b) % m      <- only when m is prime
```

Division is the odd one. You cannot divide. You multiply by the *modular
inverse*. When `m` is prime, `inverse(b) = b^(m-2) % m` (Fermat's little
theorem), computed with fast power.

## How fast power works

`a^13` needs 12 multiplications the naive way, 4 this way. Square and halve.

```
a^13, exp=1101 in binary
  exp=13 (odd)  -> res = a               base = a^2
  exp=6  (even) -> res = a               base = a^4
  exp=3  (odd)  -> res = a * a^4         base = a^8
  exp=1  (odd)  -> res = a * a^4 * a^8   base = a^16
  exp=0  -> stop.  a^(1+4+8) = a^13      4 steps, not 12
```

```cpp
long long pw(long long a, long long e, long long m) {
    long long r = 1; a %= m;
    while (e > 0) {
        if (e & 1) r = r * a % m;
        a = a * a % m;
        e >>= 1;
    }
    return r;
}
long long inv(long long a, long long m) { return pw(a, m - 2, m); } // m prime
```

The one trap: `int` overflows. `1e9 * 1e9` does not fit in `int` and barely
fits in `long long`. Use `long long` for every multiply.

---

## The core set

The rows marked ★ are the core set: 17 problems, one per mechanism. Solve those
unaided and you own the topic. Everything else in this file is there for more
reps when a block still feels slow — see
[../review-fable.md](../review-fable.md).

## Block 1 — the remainder itself (warm-up)

| # | Problem | Source | Level | Notes |
|---|---|---|---|---|
| 1 | [ ] ★ [Weird Algorithm](https://cses.fi/problemset/task/1068) | CSES | easy | `n%2` and overflow |
| 2 | [ ] [Modulo](https://open.kattis.com/problems/modulo) | Kattis | 1.5 | count distinct remainders |
| 3 | [ ] [Number Spiral](https://cses.fi/problemset/task/1071) | CSES | easy | parity cases |
| 4 | [ ] [Coin Piles](https://cses.fi/problemset/task/1754) | CSES | easy | divisibility by 3 |
| 5 | [ ] ★ [Trailing Zeros](https://cses.fi/problemset/task/1618) | CSES | easy | count factors of 5 |
| 6 | [ ] [Zero Sum](https://codeforces.com/problemset/problem/2247/A) | CF 2247A | 800 | |
| 7 | [ ] [The Best Card](https://codeforces.com/problemset/problem/2253/A) | CF 2253A | 800 | |
| 8 | [ ] [Minus Two](https://codeforces.com/problemset/problem/2259/B) | CF 2259B | 800 | |
| 9 | [ ] [Divide and Conquer](https://codeforces.com/problemset/problem/2241/A) | CF 2241A | 800 | |
| 10 | [ ] [Smallest Integer Divisible by K](https://leetcode.com/problems/smallest-integer-divisible-by-k/) | LC 1015 | medium | remainder cycle |
| 11 | [ ] ★ [Find the Divisibility Array of a String](https://leetcode.com/problems/find-the-divisibility-array-of-a-string/) | LC 2575 | medium | running mod |
| 12 | [ ] [Fraction to Recurring Decimal](https://leetcode.com/problems/fraction-to-recurring-decimal/) | LC 166 | medium | remainder repeats |

## Block 2 — prefix remainders and counting pairs

| # | Problem | Source | Level | Notes |
|---|---|---|---|---|
| 13 | [ ] ★ [Subarray Sums Divisible by K](https://leetcode.com/problems/subarray-sums-divisible-by-k/) | LC 974 | medium | prefix mod + map |
| 14 | [ ] [Continuous Subarray Sum](https://leetcode.com/problems/continuous-subarray-sum/) | LC 523 | medium | |
| 15 | [ ] [Make Sum Divisible by P](https://leetcode.com/problems/make-sum-divisible-by-p/) | LC 1590 | medium | |
| 16 | [ ] [Count Array Pairs Divisible by K](https://leetcode.com/problems/count-array-pairs-divisible-by-k/) | LC 2183 | hard | gcd + divisors |
| 17 | [ ] ★ [Divisible Subsequences](https://open.kattis.com/problems/divisible) | Kattis | 3.5 | prefix mod, the classic |
| 18 | [ ] [Remainder Reminder](https://open.kattis.com/problems/remainderreminder) | Kattis | 4.0 | count pairs by remainder |
| 19 | [ ] [Subarrays](https://codeforces.com/problemset/problem/2276/C) | CF 2276C | 1100 | |
| 20 | [ ] [Everything Everywhere](https://codeforces.com/problemset/problem/2226/B) | CF 2226B | 900 | |
| 21 | [ ] [ezraft and Array](https://codeforces.com/problemset/problem/2246/B) | CF 2246B | 900 | |
| 22 | [ ] [Monocarp and Projects](https://codeforces.com/problemset/problem/2260/B) | CF 2260B | 900 | |
| 23 | [ ] [Stepan and Permutation](https://codeforces.com/problemset/problem/2244/C) | CF 2244C | 1100 | |
| 24 | [ ] [Yaroslav and Productivity](https://codeforces.com/problemset/problem/2244/D) | CF 2244D | 1200 | |

## Block 3 — fast power

| # | Problem | Source | Level | Notes |
|---|---|---|---|---|
| 25 | [ ] ★ [Exponentiation](https://cses.fi/problemset/task/1095) | CSES | easy | write `pw` once, keep it |
| 26 | [ ] [Binary Exponentiation](https://open.kattis.com/problems/binaryexponentiation) | Kattis | 2.0 | same thing |
| 27 | [ ] [Exponentiation](https://open.kattis.com/problems/exponentiation) | Kattis | 3.0 | |
| 28 | [ ] [Pow(x, n)](https://leetcode.com/problems/powx-n/) | LC 50 | medium | floating version |
| 29 | [ ] ★ [Super Pow](https://leetcode.com/problems/super-pow/) | LC 372 | medium | huge exponent as array, mod 1337 |
| 30 | [ ] [Modular Exponentiation](https://codeforces.com/problemset/problem/913/A) | CF 913A | 1000 | |
| 31 | [ ] ★ [Exponentiation II](https://cses.fi/problemset/task/1712) | CSES | medium | tower `a^b^c`, needs Fermat on the exponent |
| 32 | [ ] [Exponents](https://open.kattis.com/problems/exponents) | Kattis | 4.5 | |
| 33 | [ ] [Associative Exponents](https://open.kattis.com/problems/associativeexponents) | Kattis | 5.0 | |
| 34 | [ ] [Exponial](https://open.kattis.com/problems/exponial) | Kattis | 5.3 | `n^(n-1)^...` mod m |
| 35 | [ ] [Count Collisions of Monkeys on a Polygon](https://leetcode.com/problems/count-collisions-of-monkeys-on-a-polygon/) | LC 2550 | medium | `2^n - 2` mod |
| 36 | [ ] [Random Digital Exponentiation](https://open.kattis.com/problems/randomdigitalexponentiation) | Kattis | 6.5 | |

## Block 4 — modular inverse and division

| # | Problem | Source | Level | Notes |
|---|---|---|---|---|
| 37 | [ ] ★ [Modular Arithmetic](https://open.kattis.com/problems/modulararithmetic) | Kattis | 3.4 | +, -, *, / mod n by hand |
| 38 | [ ] ★ [Binomial Coefficients](https://cses.fi/problemset/task/1079) | CSES | medium | factorials + inverse factorials |
| 39 | [ ] [Divisor Analysis](https://cses.fi/problemset/task/2182) | CSES | medium | product of divisors; inverse of 2 |
| 40 | [ ] [Multipliers](https://codeforces.com/problemset/problem/615/D) | CF 615D | 2200 | product of divisors, Fermat on exponent |
| 41 | [ ] [Modular Reverse Engineering](https://open.kattis.com/problems/modularreverseengineering) | Kattis | 5.5 | |
| 42 | [ ] [Count Ways to Make Array With Product](https://leetcode.com/problems/count-ways-to-make-array-with-product/) | LC 1735 | hard | stars and bars + inverse factorial |
| 43 | [ ] ★ [Number of Ways to Reach a Position After Exactly k Steps](https://leetcode.com/problems/number-of-ways-to-reach-a-position-after-exactly-k-steps/) | LC 2400 | medium | one binomial mod |
| 44 | [ ] [Number of Ways to Split a String](https://leetcode.com/problems/number-of-ways-to-split-a-string/) | LC 1573 | medium | gaps multiply mod |
| 45 | [ ] [Odd Binomial Coefficients](https://open.kattis.com/problems/oddbinom) | Kattis | 4.8 | Lucas mod 2 |
| 46 | [ ] [A Totient Quotient](https://open.kattis.com/problems/atotientquotient) | Kattis | 6.5 | Euler phi |

## Block 5 — combinatorics under a modulus

| # | Problem | Source | Level | Notes |
|---|---|---|---|---|
| 47 | [ ] [Creating Strings II](https://cses.fi/problemset/task/1715) | CSES | medium | multinomial |
| 48 | [ ] ★ [Distributing Apples](https://cses.fi/problemset/task/1716) | CSES | medium | stars and bars |
| 49 | [ ] [Christmas Party](https://cses.fi/problemset/task/1717) | CSES | medium | derangements |
| 50 | [ ] ★ [Bracket Sequences I](https://cses.fi/problemset/task/2064) | CSES | medium | Catalan |
| 51 | [ ] [Bracket Sequences II](https://cses.fi/problemset/task/2187) | CSES | hard | Catalan with a prefix fixed |
| 52 | [ ] [Counting Necklaces](https://cses.fi/problemset/task/2209) | CSES | hard | Burnside + inverse |
| 53 | [ ] [Counting Grids](https://cses.fi/problemset/task/2210) | CSES | hard | Burnside again |
| 54 | [ ] [Counting Coprime Pairs](https://cses.fi/problemset/task/2417) | CSES | hard | Mobius |
| 55 | [ ] [Permutation Order](https://cses.fi/problemset/task/3397) | CSES | medium | |
| 56 | [ ] [Permutation Rounds](https://cses.fi/problemset/task/3398) | CSES | medium | cycle lengths, lcm |
| 57 | [ ] [Beautiful Numbers](https://codeforces.com/problemset/problem/300/C) | CF 300C | 2000 | binomial mod p over digit sums |
| 58 | [ ] [Two Arrays](https://codeforces.com/problemset/problem/1288/C) | CF 1288C | 1600 | one binomial, mod |
| 59 | [ ] [Substring Removal](https://codeforces.com/problemset/problem/1096/B) | CF 1096B | 1500 | counting mod |
| 60 | [ ] [Count the Number of Infection Sequences](https://leetcode.com/problems/count-the-number-of-infection-sequences/) | LC 2954 | hard | multinomial + powers |
| 61 | [ ] [Number of Music Playlists](https://leetcode.com/problems/number-of-music-playlists/) | LC 920 | hard | dp mod |
| 62 | [ ] [K Inverse Pairs Array](https://leetcode.com/problems/k-inverse-pairs-array/) | LC 629 | hard | dp with sliding sum mod |

## Block 6 — counting DP where every state is taken mod

| # | Problem | Source | Level | Notes |
|---|---|---|---|---|
| 63 | [ ] ★ [Number of Dice Rolls With Target Sum](https://leetcode.com/problems/number-of-dice-rolls-with-target-sum/) | LC 1155 | medium | |
| 64 | [ ] [Number of Ways to Stay in the Same Place After Some Steps](https://leetcode.com/problems/number-of-ways-to-stay-in-the-same-place-after-some-steps/) | LC 1269 | hard | |
| 65 | [ ] [Knight Dialer](https://leetcode.com/problems/knight-dialer/) | LC 935 | medium | |
| 66 | [ ] [Domino and Tromino Tiling](https://leetcode.com/problems/domino-and-tromino-tiling/) | LC 790 | medium | |
| 67 | [ ] [Dice Roll Simulation](https://leetcode.com/problems/dice-roll-simulation/) | LC 1223 | hard | |
| 68 | [ ] [Number of Paths with Max Score](https://leetcode.com/problems/number-of-paths-with-max-score/) | LC 1301 | hard | |
| 69 | [ ] [Number of Ways to Form a Target String Given a Dictionary](https://leetcode.com/problems/number-of-ways-to-form-a-target-string-given-a-dictionary/) | LC 1639 | hard | |
| 70 | [ ] [Painting a Grid With Three Different Colors](https://leetcode.com/problems/painting-a-grid-with-three-different-colors/) | LC 1931 | hard | profile dp mod |
| 71 | [ ] [Masha and the Garland](https://codeforces.com/problemset/problem/2244/E) | CF 2244E | 1400 | |
| 72 | [ ] [Storming Arasaka](https://codeforces.com/problemset/problem/2238/D) | CF 2238D | 1500 | |
| 73 | [ ] [Fair and Square](https://codeforces.com/problemset/problem/2241/E) | CF 2241E | 1600 | |

## Block 7 — congruences, CRT, order

| # | Problem | Source | Level | Notes |
|---|---|---|---|---|
| 74 | [ ] [Josephus Queries](https://cses.fi/problemset/task/2164) | CSES | medium | recurrence on remainders |
| 75 | [ ] ★ [Chinese Remainder](https://open.kattis.com/problems/chineseremainder) | Kattis | 5.0 | coprime moduli |
| 76 | [ ] [Chinese Remainder Theorem (non-relatively prime moduli)](https://open.kattis.com/problems/generalchineseremainder) | Kattis | 6.0 | the general case |
| 77 | [ ] [Envious Exponents](https://open.kattis.com/problems/enviousexponents) | Kattis | 4.0 | |
| 78 | [ ] [Exponent Exchange](https://open.kattis.com/problems/exponentexchange) | Kattis | 5.0 | |
| 79 | [ ] [Fibonacci Words](https://open.kattis.com/problems/fibonacci) | Kattis | 5.0 | |
| 80 | [ ] [Euclid, Sequence and Two Numbers](https://codeforces.com/problemset/problem/2234/A) | CF 2234A | 800 | |
| 81 | [ ] [GCD Treasury](https://codeforces.com/problemset/problem/2267/C) | CF 2267C | 1200 | |
| 82 | [ ] [Prime Destruction](https://codeforces.com/problemset/problem/2266/E) | CF 2266E | 1400 | |
| 83 | [ ] [Bermuda Rectangle](https://codeforces.com/problemset/problem/2257/D) | CF 2257D | 1600 | |
| 84 | [ ] [XOR, Expression and Two Binary Numbers](https://codeforces.com/problemset/problem/2234/D) | CF 2234D | 1500 | |
| 85 | [ ] [Power Products](https://codeforces.com/problemset/problem/1225/D) | CF 1225D | 1800 | |

## Block 8 — matrix power and linear recurrences mod

| # | Problem | Source | Level | Notes |
|---|---|---|---|---|
| 86 | [ ] ★ [Fibonacci Numbers](https://cses.fi/problemset/task/1722) | CSES | medium | 2x2 matrix power |
| 87 | [ ] [Throwing Dice](https://cses.fi/problemset/task/1096) | CSES | medium | 6x6 matrix power |
| 88 | [ ] ★ [Graph Paths I](https://cses.fi/problemset/task/1723) | CSES | medium | adjacency matrix power |
| 89 | [ ] [Graph Paths II](https://cses.fi/problemset/task/1724) | CSES | hard | min-plus, no mod but same shape |
| 90 | [ ] [System of Linear Equations](https://cses.fi/problemset/task/3154) | CSES | hard | Gauss mod 2 |

## Block 9 — the hard end

| # | Problem | Source | Level | Notes |
|---|---|---|---|---|
| 91 | [ ] [Elections in Saransk (easy)](https://codeforces.com/problemset/problem/2236/F1) | CF 2236F1 | 1700 | |
| 92 | [ ] [Tea Blend](https://codeforces.com/problemset/problem/2275/F) | CF 2275F | 1800 | |
| 93 | [ ] [Even If the World Turns](https://codeforces.com/problemset/problem/2255/C) | CF 2255C | 2100 | |
| 94 | [ ] [Product of Closures](https://codeforces.com/problemset/problem/2242/E) | CF 2242E | 2200 | |
| 95 | [ ] [Modular Tree](https://codeforces.com/problemset/problem/2266/G) | CF 2266G | 2200 | |
| 96 | [ ] [A Prime Flood (easy)](https://codeforces.com/problemset/problem/2264/E1) | CF 2264E1 | 2200 | |
| 97 | [ ] [Elections in Saransk (hard)](https://codeforces.com/problemset/problem/2236/F2) | CF 2236F2 | 2200 | |
| 98 | [ ] [A Prime Flood (hard)](https://codeforces.com/problemset/problem/2264/E2) | CF 2264E2 | 2700 | |
| 99 | [ ] [4-beauty](https://codeforces.com/problemset/problem/2253/F) | CF 2253F | 2600 | |
| 100 | [ ] [No Balance Left](https://codeforces.com/problemset/problem/2248/G) | CF 2248G | 3000 | |

---

## Notes on the sources

- CSES task ids above were read from the live problem set page, so the links are exact.
- Kattis difficulty is its own 1.0–10.0 scale, not a Codeforces rating.
- Codeforces ratings came from the `problemset.problems` API with the
  `number theory` tag. A rating can move a little over time.
- The few LeetCode "level" values are LeetCode's own easy/medium/hard.
