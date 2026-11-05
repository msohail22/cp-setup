# Problem list

## What this is

A list of topics. One folder for each topic. Two files in each folder.

You solve problems from one topic until the pattern is automatic. Then you go to
the next topic.

## The two files

| File | What it holds | How many |
|---|---|---|
| `understand.md` | The problems you must solve. One problem for each idea in the topic. | 8 to 32 |
| `crazy.md` | Every problem found for the topic. Extra repetitions. | 17 to 3400 |

Solve `understand.md` first. Solve all of it. Go to `crazy.md` only if the topic
is still slow.

## Rules for the files

1. Put only links in the file. Write no other text.
2. Use three headings: `## Easy`, `## Medium`, `## Hard`.
3. Write each link as a list item.
4. Sort the links from easy to hard inside each heading.
5. Test that each link works. Remove a link that fails.
6. Make each link from the judge's own data. Do not guess a link.

## How to build a topic folder

1. Choose the next topic from the list below.
2. Get the problems from each source. Use the queries in the next section.
3. Classify the problems. Use the judge's tag if a tag exists.
4. Read the problem statement if no tag exists. Read the editorial also. Then
   decide if the problem belongs to the topic.
5. Give each problem one level: easy, medium or hard.
6. Write `understand.md`. Put one problem for each idea in the topic. Start
   with the most simple idea.
7. Write `crazy.md`. Put every problem found.
8. Add the folder link to the topic list below.
9. Add the `learn:` links. Use a page from cp-algorithms or USACO Guide. Test
   each page. Do not write a page address from memory.

## Sources

| Source | How to get the problems | How exact |
|---|---|---|
| Codeforces | `problemset.problems?tags=<tag>` from the API | Exact for a tag that exists. No tag exists for about 16 topics. |
| LeetCode | `topicTag(slug:"<slug>")` from the GraphQL API | Exact. The tags are real. |
| CSES | Read the section from the problem set page | Exact. The set holds 300 problems only. |
| Kattis | `search?q=<word>`, or read the catalogue pages | Rough. No tags exist. |
| AtCoder | The contest task pages | Exact. Needs `atcoder.jp` in the allowed domains. |

Rules for the sources:

- Codeforces gives about 70 percent of each file. It has ratings and editorials.
- Spend CSES problems with care. There are 300 and no more.
- Kattis is the only source with ICPC-style problems.
- Keep LeetCode in the easy section. It gives no input parsing and loose time
  limits.

## Limits to respect

1. Make a small number of requests. A judge stops a client that is too fast.
2. Wait 4 seconds between requests to Codeforces.
3. Do not read the code of another person's submission. Codeforces blocks it.
4. Ask before you start a large download.

## Levels

| Level | Codeforces | LeetCode | Kattis |
|---|---|---|---|
| Easy | 800 to 1200 | Easy | 1.0 to 1.8 |
| Medium | 1300 to 1900 | Medium | 1.9 to 2.5 |
| Hard | 2000 and more | Hard | 2.6 and more |

## Also do mixed practice

The topic files teach you the tools. They do not teach you to choose a tool.

Do two virtual Division 2 contests each week. Solve problems that show no tag.
A contest gives you no topic name, so this is the part that moves your rating.

## Learn a topic

Each topic line has a `learn:` list. Open those pages before you solve.
`cp-algorithms` gives the algorithm and the code. `USACO <level>` gives a
lesson at that difficulty. `CSES handbook` is one book for the basics.

## Topics

One technique for each topic. Tier 1 holds the techniques at rating 2200 and
below. Tier 2 holds the techniques above it.

Work Tier 1 in order. Open Tier 2 when your rating passes 1900.

Each topic has a box. Change `[ ]` to `[x]` when you finish all of
`understand.md` for that topic. GitHub shows the box in this file but does not
let you click it, so you edit the character.

### Tier 1

1. [ ] [Implementation and simulation](implementation/) — learn: [USACO bronze](https://usaco.guide/bronze/simulation) · [USACO bronze](https://usaco.guide/bronze/time-comp) · [CSES handbook](https://cses.fi/book/book.pdf)
2. [ ] [Integer overflow and types](integer%20overflow%20and%20types/) — learn: [USACO general](https://usaco.guide/general/data-types) · [USACO bronze](https://usaco.guide/bronze/time-comp)
3. [ ] [Arrays](arrays/) — learn: [USACO bronze](https://usaco.guide/bronze/intro-ds) · [USACO gold](https://usaco.guide/gold/custom-cpp-stl)
4. [ ] [Sorting](sorting/) — learn: [USACO bronze](https://usaco.guide/bronze/intro-sorting) · [USACO silver](https://usaco.guide/silver/sorting-custom)
5. [ ] [Frequency counting](frequency%20counting/) — learn: [USACO bronze](https://usaco.guide/bronze/intro-sets) · [USACO gold](https://usaco.guide/gold/hashmaps)
6. [ ] [Hash maps and sets](hash%20maps%20and%20sets/) — learn: [USACO gold](https://usaco.guide/gold/hashmaps) · [USACO gold](https://usaco.guide/gold/intro-sorted-sets) · [USACO bronze](https://usaco.guide/bronze/intro-sets)
7. [ ] [Ad-hoc observation](ad-hoc%20observation/) — learn: [USACO bronze](https://usaco.guide/bronze/ad-hoc) · [USACO bronze](https://usaco.guide/bronze/casework)
8. [ ] [Invariants](invariants/) — learn: [USACO bronze](https://usaco.guide/bronze/ad-hoc) · [cp-algorithms](https://cp-algorithms.com/others/josephus_problem.html)
9. [ ] [Parity arguments](parity%20arguments/) — learn: [USACO bronze](https://usaco.guide/bronze/ad-hoc) · [USACO silver](https://usaco.guide/silver/intro-bitwise)
10. [ ] [Recursion](recursion/) — learn: [USACO bronze](https://usaco.guide/bronze/complete-rec) · [cp-algorithms](https://cp-algorithms.com/others/tortoise_and_hare.html)
11. [ ] [Backtracking](backtracking/) — learn: [USACO bronze](https://usaco.guide/bronze/intro-complete) · [USACO bronze](https://usaco.guide/bronze/complete-rec)
12. [ ] [Modular arithmetic](modular%20arithmetic/) — learn: [cp-algorithms](https://cp-algorithms.com/algebra/module-inverse.html) · [USACO gold](https://usaco.guide/gold/modular) · [cp-algorithms](https://cp-algorithms.com/algebra/linear_congruence_equation.html)
13. [ ] [Fast exponentiation](fast%20exponentiation/) — learn: [cp-algorithms](https://cp-algorithms.com/algebra/binary-exp.html) · [USACO gold](https://usaco.guide/gold/modular)
14. [ ] [Modular inverse](modular%20inverse/) — learn: [cp-algorithms](https://cp-algorithms.com/algebra/module-inverse.html) · [cp-algorithms](https://cp-algorithms.com/algebra/factorial-modulo.html)
15. [ ] [Binary search on a sorted array](binary%20search%20on%20a%20sorted%20array/) — learn: [cp-algorithms](https://cp-algorithms.com/num_methods/binary_search.html) · [USACO silver](https://usaco.guide/silver/binary-search-sorted-array)
16. [ ] [Binary search on the answer](binary%20search%20on%20the%20answer/) — learn: [USACO silver](https://usaco.guide/silver/binary-search) · [cp-algorithms](https://cp-algorithms.com/num_methods/binary_search.html)
17. [ ] [Ternary search](ternary%20search/) — learn: [cp-algorithms](https://cp-algorithms.com/num_methods/ternary_search.html) · [USACO gold](https://usaco.guide/gold/ternary-search)
18. [ ] [Two pointers](two%20pointers/) — learn: [USACO silver](https://usaco.guide/silver/two-pointers) · [cp-algorithms](https://cp-algorithms.com/others/maximum_average_segment.html)
19. [ ] [Sliding window](sliding%20window/) — learn: [USACO gold](https://usaco.guide/gold/sliding-window) · [cp-algorithms](https://cp-algorithms.com/data_structures/stack_queue_modification.html)
20. [ ] [Prefix sums](prefix%20sums/) — learn: [USACO silver](https://usaco.guide/silver/prefix-sums) · [USACO silver](https://usaco.guide/silver/more-prefix-sums)
21. [ ] [Difference arrays](difference%20arrays/) — learn: [USACO silver](https://usaco.guide/silver/more-prefix-sums) · [USACO plat](https://usaco.guide/plat/range-sweep)
22. [ ] [Coordinate compression](coordinate%20compression/) — learn: [USACO plat](https://usaco.guide/plat/sweep-line) · [USACO gold](https://usaco.guide/gold/intro-sorted-sets)
23. [ ] [Inversion counting](inversion%20counting/) — learn: [cp-algorithms](https://cp-algorithms.com/data_structures/fenwick.html) · [USACO gold](https://usaco.guide/gold/intro-sorted-sets)
24. [ ] [Exchange argument greedy](exchange%20argument%20greedy/) — learn: [USACO silver](https://usaco.guide/silver/greedy-sorting) · [USACO bronze](https://usaco.guide/bronze/intro-greedy)
25. [ ] [Interval scheduling](interval%20scheduling/) — learn: [USACO silver](https://usaco.guide/silver/greedy-sorting) · [USACO plat](https://usaco.guide/plat/sweep-line)
26. [ ] [Constructive problems](constructive%20problems/) — learn: [USACO bronze](https://usaco.guide/bronze/ad-hoc) · [USACO bronze](https://usaco.guide/bronze/casework)
27. [ ] [Linked lists](linked%20lists/) — learn: [USACO bronze](https://usaco.guide/bronze/intro-ds) · [USACO gold](https://usaco.guide/gold/custom-cpp-stl)
28. [ ] [Stacks](stacks/) — learn: [USACO gold](https://usaco.guide/gold/stacks) · [cp-algorithms](https://cp-algorithms.com/data_structures/stack_queue_modification.html)
29. [ ] [Queues](queues/) — learn: [USACO bronze](https://usaco.guide/bronze/intro-ds) · [cp-algorithms](https://cp-algorithms.com/data_structures/stack_queue_modification.html)
30. [ ] [Deques](deques/) — learn: [cp-algorithms](https://cp-algorithms.com/data_structures/stack_queue_modification.html) · [USACO gold](https://usaco.guide/gold/sliding-window)
31. [ ] [Heaps and priority queues](heaps%20and%20priority%20queues/) — learn: [USACO silver](https://usaco.guide/silver/priority-queues) · [cp-algorithms](https://cp-algorithms.com/data_structures/randomized_heap.html)
32. [ ] [Monotonic stack](monotonic%20stack/) — learn: [USACO gold](https://usaco.guide/gold/stacks) · [cp-algorithms](https://cp-algorithms.com/data_structures/stack_queue_modification.html)
33. [ ] [Monotonic deque](monotonic%20deque/) — learn: [cp-algorithms](https://cp-algorithms.com/data_structures/stack_queue_modification.html) · [USACO gold](https://usaco.guide/gold/sliding-window)
34. [ ] [String implementation](string%20implementation/) — learn: [cp-algorithms](https://cp-algorithms.com/string/expression_parsing.html) · [USACO general](https://usaco.guide/general/data-types)
35. [ ] [String hashing](string%20hashing/) — learn: [cp-algorithms](https://cp-algorithms.com/string/string-hashing.html) · [cp-algorithms](https://cp-algorithms.com/string/rabin-karp.html) · [USACO gold](https://usaco.guide/gold/hashing)
36. [ ] [Prefix function](prefix%20function/) — learn: [cp-algorithms](https://cp-algorithms.com/string/prefix-function.html) · [USACO adv](https://usaco.guide/adv/string-search)
37. [ ] [Z function](z%20function/) — learn: [cp-algorithms](https://cp-algorithms.com/string/z-function.html) · [USACO adv](https://usaco.guide/adv/string-search)
38. [ ] [Tries](tries/) — learn: [USACO adv](https://usaco.guide/adv/string-search) · [cp-algorithms](https://cp-algorithms.com/string/aho_corasick.html)
39. [ ] [Bit manipulation](bit%20manipulation/) — learn: [cp-algorithms](https://cp-algorithms.com/algebra/bit-manipulation.html) · [USACO silver](https://usaco.guide/silver/intro-bitwise)
40. [ ] [Subset enumeration](subset%20enumeration/) — learn: [cp-algorithms](https://cp-algorithms.com/algebra/all-submasks.html) · [USACO adv](https://usaco.guide/adv/comb-sub)
41. [ ] [Bitset tricks](bitset%20tricks/) — learn: [USACO plat](https://usaco.guide/plat/bitsets) · [USACO adv](https://usaco.guide/adv/vectorization)
42. [ ] [Sweep line](sweep%20line/) — learn: [USACO plat](https://usaco.guide/plat/sweep-line) · [cp-algorithms](https://cp-algorithms.com/geometry/length-of-segments-union.html)
43. [ ] [Disjoint set union](disjoint%20set%20union/) — learn: [cp-algorithms](https://cp-algorithms.com/data_structures/disjoint_set_union.html) · [USACO gold](https://usaco.guide/gold/dsu)
44. [ ] [Minimum spanning tree](minimum%20spanning%20tree/) — learn: [cp-algorithms](https://cp-algorithms.com/graph/mst_kruskal.html) · [cp-algorithms](https://cp-algorithms.com/graph/mst_prim.html) · [USACO gold](https://usaco.guide/gold/mst)
45. [ ] [Fenwick tree](fenwick%20tree/) — learn: [cp-algorithms](https://cp-algorithms.com/data_structures/fenwick.html) · [USACO gold](https://usaco.guide/gold/intro-sorted-sets)
46. [ ] [Segment tree point update](segment%20tree%20point%20update/) — learn: [cp-algorithms](https://cp-algorithms.com/data_structures/segment_tree.html) · [USACO plat](https://usaco.guide/plat/segtree-ext)
47. [ ] [Segment tree lazy propagation](segment%20tree%20lazy%20propagation/) — learn: [cp-algorithms](https://cp-algorithms.com/data_structures/segment_tree.html) · [USACO plat](https://usaco.guide/plat/segtree-ext)
48. [ ] [Sparse table](sparse%20table/) — learn: [cp-algorithms](https://cp-algorithms.com/data_structures/sparse-table.html) · [cp-algorithms](https://cp-algorithms.com/sequences/rmq.html)
49. [ ] [Sqrt decomposition](sqrt%20decomposition/) — learn: [cp-algorithms](https://cp-algorithms.com/data_structures/sqrt_decomposition.html) · [USACO plat](https://usaco.guide/plat/sqrt)
50. [ ] [Mo's algorithm](mo%27s%20algorithm/) — learn: [cp-algorithms](https://cp-algorithms.com/data_structures/sqrt_decomposition.html) · [USACO plat](https://usaco.guide/plat/sqrt)
51. [ ] [Graph traversal](graph%20traversal/) — learn: [cp-algorithms](https://cp-algorithms.com/graph/depth-first-search.html) · [cp-algorithms](https://cp-algorithms.com/graph/breadth-first-search.html) · [USACO silver](https://usaco.guide/silver/graph-traversal)
52. [ ] [Connected components](connected%20components/) — learn: [cp-algorithms](https://cp-algorithms.com/graph/search-for-connected-components.html) · [USACO silver](https://usaco.guide/silver/flood-fill)
53. [ ] [Grid BFS](grid%20bfs/) — learn: [USACO silver](https://usaco.guide/silver/flood-fill) · [cp-algorithms](https://cp-algorithms.com/graph/breadth-first-search.html)
54. [ ] [Implicit-state BFS](implicit-state%20bfs/) — learn: [cp-algorithms](https://cp-algorithms.com/graph/breadth-first-search.html) · [USACO gold](https://usaco.guide/gold/unweighted-shortest-paths)
55. [ ] [0-1 BFS](0-1%20bfs/) — learn: [cp-algorithms](https://cp-algorithms.com/graph/01_bfs.html) · [USACO gold](https://usaco.guide/gold/shortest-paths)
56. [ ] [Multi-source BFS](multi-source%20bfs/) — learn: [cp-algorithms](https://cp-algorithms.com/graph/breadth-first-search.html) · [USACO gold](https://usaco.guide/gold/unweighted-shortest-paths)
57. [ ] [Dijkstra](dijkstra/) — learn: [cp-algorithms](https://cp-algorithms.com/graph/dijkstra.html) · [cp-algorithms](https://cp-algorithms.com/graph/dijkstra_sparse.html) · [USACO gold](https://usaco.guide/gold/shortest-paths)
58. [ ] [Bellman-Ford](bellman-ford/) — learn: [cp-algorithms](https://cp-algorithms.com/graph/bellman_ford.html) · [cp-algorithms](https://cp-algorithms.com/graph/finding-negative-cycle-in-graph.html) · [USACO adv](https://usaco.guide/adv/sp-neg)
59. [ ] [Floyd-Warshall](floyd-warshall/) — learn: [cp-algorithms](https://cp-algorithms.com/graph/all-pair-shortest-path-floyd-warshall.html) · [USACO gold](https://usaco.guide/gold/shortest-paths)
60. [ ] [Topological sort](topological%20sort/) — learn: [cp-algorithms](https://cp-algorithms.com/graph/topological-sort.html) · [USACO gold](https://usaco.guide/gold/toposort)
61. [ ] [DAG dynamic programming](dag%20dynamic%20programming/) — learn: [USACO gold](https://usaco.guide/gold/toposort) · [USACO gold](https://usaco.guide/gold/intro-dp)
62. [ ] [Strongly connected components](strongly%20connected%20components/) — learn: [cp-algorithms](https://cp-algorithms.com/graph/strongly-connected-components.html) · [cp-algorithms](https://cp-algorithms.com/graph/2SAT.html)
63. [ ] [Bridges and articulation points](bridges%20and%20articulation%20points/) — learn: [cp-algorithms](https://cp-algorithms.com/graph/bridge-searching.html) · [cp-algorithms](https://cp-algorithms.com/graph/cutpoints.html) · [USACO adv](https://usaco.guide/adv/critical)
64. [ ] [Euler path and circuit](euler%20path%20and%20circuit/) — learn: [cp-algorithms](https://cp-algorithms.com/graph/euler_path.html) · [USACO adv](https://usaco.guide/adv/eulerian-tours)
65. [ ] [Functional graphs](functional%20graphs/) — learn: [USACO silver](https://usaco.guide/silver/func-graphs) · [cp-algorithms](https://cp-algorithms.com/graph/finding-cycle.html)
66. [ ] [Permutation cycles](permutation%20cycles/) — learn: [USACO silver](https://usaco.guide/silver/func-graphs) · [cp-algorithms](https://cp-algorithms.com/others/josephus_problem.html)
67. [ ] [Tree traversal](tree%20traversal/) — learn: [USACO silver](https://usaco.guide/silver/intro-tree) · [cp-algorithms](https://cp-algorithms.com/graph/depth-first-search.html)
68. [ ] [Tree diameter](tree%20diameter/) — learn: [USACO silver](https://usaco.guide/silver/intro-tree) · [cp-algorithms](https://cp-algorithms.com/graph/tree_painting.html)
69. [ ] [Lowest common ancestor](lowest%20common%20ancestor/) — learn: [cp-algorithms](https://cp-algorithms.com/graph/lca.html) · [cp-algorithms](https://cp-algorithms.com/graph/lca_binary_lifting.html) · [USACO gold](https://usaco.guide/gold/lca-euler)
70. [ ] [Binary lifting](binary%20lifting/) — learn: [cp-algorithms](https://cp-algorithms.com/graph/lca_binary_lifting.html) · [USACO plat](https://usaco.guide/plat/binary-jump)
71. [ ] [Euler tour](euler%20tour/) — learn: [USACO gold](https://usaco.guide/gold/tree-euler) · [cp-algorithms](https://cp-algorithms.com/graph/lca_farachcoltonbender.html)
72. [ ] [Tree dynamic programming](tree%20dynamic%20programming/) — learn: [USACO gold](https://usaco.guide/gold/dp-trees) · [cp-algorithms](https://cp-algorithms.com/graph/tree_painting.html)
73. [ ] [Rerooting](rerooting/) — learn: [USACO gold](https://usaco.guide/gold/all-roots)
74. [ ] [DSU on tree](dsu%20on%20tree/) — learn: [USACO plat](https://usaco.guide/plat/merging) · [cp-algorithms](https://cp-algorithms.com/data_structures/disjoint_set_union.html)
75. [ ] [Small to large merging](small%20to%20large%20merging/) — learn: [USACO plat](https://usaco.guide/plat/merging) · [cp-algorithms](https://cp-algorithms.com/data_structures/deleting_in_log_n.html)
76. [ ] [One-dimensional dynamic programming](one-dimensional%20dynamic%20programming/) — learn: [cp-algorithms](https://cp-algorithms.com/dynamic_programming/intro-to-dp.html) · [USACO gold](https://usaco.guide/gold/intro-dp) · [CSES handbook](https://cses.fi/book/book.pdf)
77. [ ] [Knapsack](knapsack/) — learn: [cp-algorithms](https://cp-algorithms.com/dynamic_programming/knapsack.html) · [USACO gold](https://usaco.guide/gold/knapsack)
78. [ ] [Grid dynamic programming](grid%20dynamic%20programming/) — learn: [USACO gold](https://usaco.guide/gold/paths-grids) · [cp-algorithms](https://cp-algorithms.com/dynamic_programming/zero_matrix.html)
79. [ ] [Interval dynamic programming](interval%20dynamic%20programming/) — learn: [USACO gold](https://usaco.guide/gold/dp-ranges) · [cp-algorithms](https://cp-algorithms.com/dynamic_programming/divide-and-conquer-dp.html)
80. [ ] [Bitmask dynamic programming](bitmask%20dynamic%20programming/) — learn: [USACO gold](https://usaco.guide/gold/dp-bitmasks) · [cp-algorithms](https://cp-algorithms.com/algebra/all-submasks.html)
81. [ ] [Sum over subsets](sum%20over%20subsets/) — learn: [USACO plat](https://usaco.guide/plat/dp-sos) · [cp-algorithms](https://cp-algorithms.com/algebra/all-submasks.html)
82. [ ] [Digit dynamic programming](digit%20dynamic%20programming/) — learn: [USACO gold](https://usaco.guide/gold/digit-dp)
83. [ ] [Expected value dynamic programming](expected%20value%20dynamic%20programming/) — learn: [USACO adv](https://usaco.guide/adv/dp-more) · [CSES handbook](https://cses.fi/book/book.pdf)
84. [ ] [Probability](probability/) — learn: [cp-algorithms](https://cp-algorithms.com/combinatorics/stars_and_bars.html) · [CSES handbook](https://cses.fi/book/book.pdf)
85. [ ] [GCD and LCM](gcd%20and%20lcm/) — learn: [cp-algorithms](https://cp-algorithms.com/algebra/euclid-algorithm.html) · [cp-algorithms](https://cp-algorithms.com/algebra/extended-euclid-algorithm.html) · [USACO gold](https://usaco.guide/gold/divisibility)
86. [ ] [Primes and the sieve](primes%20and%20the%20sieve/) — learn: [cp-algorithms](https://cp-algorithms.com/algebra/sieve-of-eratosthenes.html) · [cp-algorithms](https://cp-algorithms.com/algebra/prime-sieve-linear.html) · [USACO gold](https://usaco.guide/gold/divisibility)
87. [ ] [Divisors](divisors/) — learn: [cp-algorithms](https://cp-algorithms.com/algebra/divisors.html) · [cp-algorithms](https://cp-algorithms.com/algebra/factorization.html)
88. [ ] [Euler phi](euler%20phi/) — learn: [cp-algorithms](https://cp-algorithms.com/algebra/phi-function.html) · [cp-algorithms](https://cp-algorithms.com/algebra/factorial-divisors.html)
89. [ ] [Chinese remainder theorem](chinese%20remainder%20theorem/) — learn: [cp-algorithms](https://cp-algorithms.com/algebra/chinese-remainder-theorem.html) · [cp-algorithms](https://cp-algorithms.com/algebra/garners-algorithm.html)
90. [ ] [Binomial coefficients](binomial%20coefficients/) — learn: [cp-algorithms](https://cp-algorithms.com/combinatorics/binomial-coefficients.html) · [USACO gold](https://usaco.guide/gold/combo)
91. [ ] [Catalan numbers](catalan%20numbers/) — learn: [cp-algorithms](https://cp-algorithms.com/combinatorics/catalan-numbers.html) · [cp-algorithms](https://cp-algorithms.com/combinatorics/bracket_sequences.html) · [USACO adv](https://usaco.guide/adv/catalan)
92. [ ] [Inclusion and exclusion](inclusion%20and%20exclusion/) — learn: [cp-algorithms](https://cp-algorithms.com/combinatorics/inclusion-exclusion.html) · [USACO gold](https://usaco.guide/gold/combo)
93. [ ] [Matrix exponentiation](matrix%20exponentiation/) — learn: [cp-algorithms](https://cp-algorithms.com/algebra/fibonacci-numbers.html) · [USACO plat](https://usaco.guide/plat/matrix-expo) · [cp-algorithms](https://cp-algorithms.com/graph/fixed_length_paths.html)
94. [ ] [Meet in the middle](meet%20in%20the%20middle/) — learn: [USACO gold](https://usaco.guide/gold/meet-in-the-middle) · [cp-algorithms](https://cp-algorithms.com/sequences/k-th.html)
95. [ ] [Nim and parity games](nim%20and%20parity%20games/) — learn: [cp-algorithms](https://cp-algorithms.com/game_theory/sprague-grundy-nim.html) · [USACO adv](https://usaco.guide/adv/game-theory)
96. [ ] [Grundy numbers](grundy%20numbers/) — learn: [cp-algorithms](https://cp-algorithms.com/game_theory/sprague-grundy-nim.html) · [cp-algorithms](https://cp-algorithms.com/game_theory/games_on_graphs.html)
97. [ ] [Maximum flow](maximum%20flow/) — learn: [cp-algorithms](https://cp-algorithms.com/graph/edmonds_karp.html) · [cp-algorithms](https://cp-algorithms.com/graph/dinic.html) · [USACO adv](https://usaco.guide/adv/max-flow)
98. [ ] [Bipartite matching](bipartite%20matching/) — learn: [cp-algorithms](https://cp-algorithms.com/graph/kuhn_maximum_bipartite_matching.html) · [cp-algorithms](https://cp-algorithms.com/graph/bipartite-check.html)
99. [ ] [2-SAT](2-sat/) — learn: [cp-algorithms](https://cp-algorithms.com/graph/2SAT.html) · [cp-algorithms](https://cp-algorithms.com/graph/strongly-connected-components.html)
100. [ ] [Geometry basics](geometry%20basics/) — learn: [cp-algorithms](https://cp-algorithms.com/geometry/basic-geometry.html) · [USACO plat](https://usaco.guide/plat/geo-pri) · [USACO bronze](https://usaco.guide/bronze/rect-geo)
101. [ ] [Convex hull](convex%20hull/) — learn: [cp-algorithms](https://cp-algorithms.com/geometry/convex-hull.html) · [USACO plat](https://usaco.guide/plat/convex-hull) · [cp-algorithms](https://cp-algorithms.com/geometry/point-in-convex-polygon.html)
102. [ ] [Interactive problems](interactive%20problems/) — learn: [USACO adv](https://usaco.guide/adv/interactive)
103. [ ] [Randomization](randomization/) — learn: [USACO adv](https://usaco.guide/adv/random) · [cp-algorithms](https://cp-algorithms.com/num_methods/simulated_annealing.html)

### Tier 2

104. [ ] [Manacher](manacher/) — learn: [cp-algorithms](https://cp-algorithms.com/string/manacher.html) · [cp-algorithms](https://cp-algorithms.com/string/main_lorentz.html)
105. [ ] [Suffix array](suffix%20array/) — learn: [cp-algorithms](https://cp-algorithms.com/string/suffix-array.html) · [USACO adv](https://usaco.guide/adv/suffix-array)
106. [ ] [Suffix automaton](suffix%20automaton/) — learn: [cp-algorithms](https://cp-algorithms.com/string/suffix-automaton.html) · [cp-algorithms](https://cp-algorithms.com/string/suffix-tree-ukkonen.html) · [USACO adv](https://usaco.guide/adv/string-suffix)
107. [ ] [Aho-Corasick](aho-corasick/) — learn: [cp-algorithms](https://cp-algorithms.com/string/aho_corasick.html) · [USACO adv](https://usaco.guide/adv/string-search)
108. [ ] [Palindromic tree](palindromic%20tree/) — learn: [cp-algorithms](https://cp-algorithms.com/string/manacher.html) · [USACO adv](https://usaco.guide/adv/string-suffix)
109. [ ] [Lyndon decomposition](lyndon%20decomposition/) — learn: [cp-algorithms](https://cp-algorithms.com/string/lyndon_factorization.html)
110. [ ] [Heavy-light decomposition](heavy-light%20decomposition/) — learn: [cp-algorithms](https://cp-algorithms.com/graph/hld.html) · [USACO plat](https://usaco.guide/plat/hld)
111. [ ] [Centroid decomposition](centroid%20decomposition/) — learn: [cp-algorithms](https://cp-algorithms.com/graph/centroid_decomposition.html) · [USACO plat](https://usaco.guide/plat/centroid)
112. [ ] [Persistent data structures](persistent%20data%20structures/) — learn: [USACO adv](https://usaco.guide/adv/persistent) · [USACO plat](https://usaco.guide/plat/sparse-segtree)
113. [ ] [Balanced binary search tree](balanced%20binary%20search%20tree/) — learn: [cp-algorithms](https://cp-algorithms.com/data_structures/treap.html) · [USACO adv](https://usaco.guide/adv/treaps)
114. [ ] [DSU with rollback](dsu%20with%20rollback/) — learn: [USACO adv](https://usaco.guide/adv/offline-del) · [cp-algorithms](https://cp-algorithms.com/graph/bridge-searching-online.html)
115. [ ] [Segment tree beats](segment%20tree%20beats/) — learn: [USACO adv](https://usaco.guide/adv/segtree-beats)
116. [ ] [Wavelet tree](wavelet%20tree/) — learn: [USACO adv](https://usaco.guide/adv/wavelet)
117. [ ] [Sqrt tree](sqrt%20tree/) — learn: [cp-algorithms](https://cp-algorithms.com/data_structures/sqrt-tree.html) · [USACO plat](https://usaco.guide/plat/sqrt)
118. [ ] [Link-cut trees](link-cut%20trees/) — learn: [USACO adv](https://usaco.guide/adv/link-cut-tree) · [cp-algorithms](https://cp-algorithms.com/graph/hld.html)
119. [ ] [Convex hull trick](convex%20hull%20trick/) — learn: [cp-algorithms](https://cp-algorithms.com/geometry/convex_hull_trick.html) · [USACO plat](https://usaco.guide/plat/convex-hull-trick) · [USACO adv](https://usaco.guide/adv/line-container)
120. [ ] [Li Chao tree](li%20chao%20tree/) — learn: [cp-algorithms](https://cp-algorithms.com/geometry/convex_hull_trick.html) · [USACO adv](https://usaco.guide/adv/line-container)
121. [ ] [Divide and conquer dynamic programming](divide%20and%20conquer%20dynamic%20programming/) — learn: [cp-algorithms](https://cp-algorithms.com/dynamic_programming/divide-and-conquer-dp.html) · [USACO adv](https://usaco.guide/adv/dp-more)
122. [ ] [Knuth optimisation](knuth%20optimisation/) — learn: [cp-algorithms](https://cp-algorithms.com/dynamic_programming/knuth-optimization.html)
123. [ ] [Aliens trick](aliens%20trick/) — learn: [USACO adv](https://usaco.guide/adv/lagrange)
124. [ ] [Broken profile dynamic programming](broken%20profile%20dynamic%20programming/) — learn: [cp-algorithms](https://cp-algorithms.com/dynamic_programming/profile-dynamics.html) · [USACO adv](https://usaco.guide/adv/dp-broken-profile)
125. [ ] [Berlekamp-Massey](berlekamp-massey/) — learn: [cp-algorithms](https://cp-algorithms.com/algebra/polynomial.html) · [USACO adv](https://usaco.guide/adv/fft-ext)
126. [ ] [Fast Fourier transform](fast%20fourier%20transform/) — learn: [cp-algorithms](https://cp-algorithms.com/algebra/fft.html) · [USACO adv](https://usaco.guide/adv/fft)
127. [ ] [Number theoretic transform](number%20theoretic%20transform/) — learn: [cp-algorithms](https://cp-algorithms.com/algebra/fft.html) · [USACO adv](https://usaco.guide/adv/fft-ext)
128. [ ] [Polynomial operations](polynomial%20operations/) — learn: [cp-algorithms](https://cp-algorithms.com/algebra/polynomial.html) · [USACO adv](https://usaco.guide/adv/fft-ext)
129. [ ] [Mobius function](mobius%20function/) — learn: [cp-algorithms](https://cp-algorithms.com/algebra/divisors.html) · [USACO adv](https://usaco.guide/adv/prefix-sums-nt-1)
130. [ ] [Dirichlet convolution](dirichlet%20convolution/) — learn: [USACO adv](https://usaco.guide/adv/prefix-sums-nt-2) · [cp-algorithms](https://cp-algorithms.com/algebra/phi-function.html)
131. [ ] [Miller-Rabin](miller-rabin/) — learn: [cp-algorithms](https://cp-algorithms.com/algebra/primality_tests.html) · [cp-algorithms](https://cp-algorithms.com/algebra/montgomery_multiplication.html)
132. [ ] [Pollard's rho](pollard%27s%20rho/) — learn: [cp-algorithms](https://cp-algorithms.com/algebra/factorization.html) · [cp-algorithms](https://cp-algorithms.com/algebra/primality_tests.html)
133. [ ] [Discrete logarithm](discrete%20logarithm/) — learn: [cp-algorithms](https://cp-algorithms.com/algebra/discrete-log.html) · [cp-algorithms](https://cp-algorithms.com/algebra/discrete-root.html)
134. [ ] [Primitive roots](primitive%20roots/) — learn: [cp-algorithms](https://cp-algorithms.com/algebra/primitive-root.html) · [cp-algorithms](https://cp-algorithms.com/algebra/discrete-root.html)
135. [ ] [Burnside and Polya](burnside%20and%20polya/) — learn: [cp-algorithms](https://cp-algorithms.com/combinatorics/burnside.html) · [cp-algorithms](https://cp-algorithms.com/combinatorics/bishops-on-chessboard.html)
136. [ ] [Matrix-tree theorem](matrix-tree%20theorem/) — learn: [cp-algorithms](https://cp-algorithms.com/graph/kirchhoff-theorem.html) · [cp-algorithms](https://cp-algorithms.com/graph/pruefer_code.html)
137. [ ] [Lindstrom-Gessel-Viennot lemma](lindstrom-gessel-viennot%20lemma/) — learn: [cp-algorithms](https://cp-algorithms.com/graph/kirchhoff-theorem.html) · [cp-algorithms](https://cp-algorithms.com/combinatorics/counting_labeled_graphs.html)
138. [ ] [Linear basis over GF(2)](linear%20basis%20over%20gf%282%29/) — learn: [USACO adv](https://usaco.guide/adv/xor-basis) · [cp-algorithms](https://cp-algorithms.com/linear_algebra/rank-matrix.html)
139. [ ] [Gaussian elimination](gaussian%20elimination/) — learn: [cp-algorithms](https://cp-algorithms.com/linear_algebra/linear-system-gauss.html) · [cp-algorithms](https://cp-algorithms.com/linear_algebra/determinant-gauss.html)
140. [ ] [Dinic](dinic/) — learn: [cp-algorithms](https://cp-algorithms.com/graph/dinic.html) · [cp-algorithms](https://cp-algorithms.com/graph/mpm.html) · [USACO adv](https://usaco.guide/adv/max-flow)
141. [ ] [Minimum cost maximum flow](minimum%20cost%20maximum%20flow/) — learn: [cp-algorithms](https://cp-algorithms.com/graph/min_cost_flow.html) · [USACO adv](https://usaco.guide/adv/min-cost-flow)
142. [ ] [Hall's theorem](hall%27s%20theorem/) — learn: [cp-algorithms](https://cp-algorithms.com/graph/kuhn_maximum_bipartite_matching.html) · [USACO adv](https://usaco.guide/adv/min-cut)
143. [ ] [Hungarian algorithm](hungarian%20algorithm/) — learn: [cp-algorithms](https://cp-algorithms.com/graph/hungarian-algorithm.html) · [cp-algorithms](https://cp-algorithms.com/graph/Assignment-problem-min-flow.html)
144. [ ] [General matching](general%20matching/) — learn: [cp-algorithms](https://cp-algorithms.com/graph/kuhn_maximum_bipartite_matching.html) · [cp-algorithms](https://cp-algorithms.com/graph/edge_vertex_connectivity.html)
145. [ ] [Minimum cut modelling](minimum%20cut%20modelling/) — learn: [USACO adv](https://usaco.guide/adv/min-cut) · [cp-algorithms](https://cp-algorithms.com/graph/stoer_wagner_mincut.html)
146. [ ] [Project selection](project%20selection/) — learn: [USACO adv](https://usaco.guide/adv/min-cut) · [USACO adv](https://usaco.guide/adv/flow-lb)
147. [ ] [Half-plane intersection](half-plane%20intersection/) — learn: [cp-algorithms](https://cp-algorithms.com/geometry/halfplane-intersection.html) · [cp-algorithms](https://cp-algorithms.com/geometry/convex-hull.html)
148. [ ] [Rotating calipers](rotating%20calipers/) — learn: [cp-algorithms](https://cp-algorithms.com/geometry/convex-hull.html) · [cp-algorithms](https://cp-algorithms.com/geometry/tangents-to-two-circles.html)
149. [ ] [Minkowski sum](minkowski%20sum/) — learn: [cp-algorithms](https://cp-algorithms.com/geometry/minkowski.html) · [cp-algorithms](https://cp-algorithms.com/geometry/point-in-convex-polygon.html)
150. [ ] [Closest pair of points](closest%20pair%20of%20points/) — learn: [cp-algorithms](https://cp-algorithms.com/geometry/nearest_points.html) · [cp-algorithms](https://cp-algorithms.com/geometry/manhattan-distance.html)
151. [ ] [KD-tree](kd-tree/) — learn: [cp-algorithms](https://cp-algorithms.com/geometry/nearest_points.html) · [cp-algorithms](https://cp-algorithms.com/geometry/vertical_decomposition.html)
152. [ ] [Three-dimensional geometry](three-dimensional%20geometry/) — learn: [cp-algorithms](https://cp-algorithms.com/geometry/basic-geometry.html) · [cp-algorithms](https://cp-algorithms.com/geometry/enclosing-circle.html)
153. [ ] [Delaunay triangulation](delaunay%20triangulation/) — learn: [cp-algorithms](https://cp-algorithms.com/geometry/delaunay.html) · [cp-algorithms](https://cp-algorithms.com/geometry/planar.html)
154. [ ] [CDQ divide and conquer](cdq%20divide%20and%20conquer/) — learn: [cp-algorithms](https://cp-algorithms.com/dynamic_programming/divide-and-conquer-dp.html) · [USACO adv](https://usaco.guide/adv/offline-del)
155. [ ] [Parallel binary search](parallel%20binary%20search/) — learn: [USACO adv](https://usaco.guide/adv/fracturing-search) · [cp-algorithms](https://cp-algorithms.com/num_methods/binary_search.html)
156. [ ] [Offline query processing](offline%20query%20processing/) — learn: [USACO adv](https://usaco.guide/adv/offline-del) · [cp-algorithms](https://cp-algorithms.com/data_structures/disjoint_set_union.html)
157. [ ] [Bitset BFS](bitset%20bfs/) — learn: [USACO plat](https://usaco.guide/plat/bitsets) · [USACO adv](https://usaco.guide/adv/vectorization)
158. [ ] [Nim variants](nim%20variants/) — learn: [cp-algorithms](https://cp-algorithms.com/game_theory/sprague-grundy-nim.html) · [USACO adv](https://usaco.guide/adv/game-theory)
159. [ ] [Hackenbush](hackenbush/) — learn: [cp-algorithms](https://cp-algorithms.com/game_theory/games_on_graphs.html) · [USACO adv](https://usaco.guide/adv/game-theory)

