# Problem list

## What this is

A list of topics. One folder for each topic. Two files in each folder.

You solve problems from one topic until the pattern is automatic. Then you go to
the next topic.

## The two files

| File | What it holds | How many |
|---|---|---|
| `understand.md` | The problems you must solve. One problem for each idea in the topic. | 40 to 70 |
| `crazy.md` | Every problem found for the topic. Extra repetitions. | 200 to 4000 |

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

## Topics

One technique for each topic. Tier 1 holds the techniques at rating 2200 and
below. Tier 2 holds the techniques above it.

Work Tier 1 in order. Open Tier 2 when your rating passes 1900.

### Tier 1

1. [Implementation and simulation](implementation/) — done
2. Integer overflow and types
3. Arrays
4. Sorting
5. Frequency counting
6. Hash maps and sets
7. Ad-hoc observation
8. Invariants
9. Parity arguments
10. Recursion
11. Backtracking
12. Modular arithmetic
13. Fast exponentiation
14. Modular inverse
15. Binary search on a sorted array
16. Binary search on the answer
17. Ternary search
18. Two pointers
19. Sliding window
20. Prefix sums
21. Difference arrays
22. Coordinate compression
23. Inversion counting
24. Exchange argument greedy
25. Interval scheduling
26. Constructive problems
27. Stacks
28. Queues
29. Deques
30. Heaps and priority queues
31. Monotonic stack
32. Monotonic deque
33. String implementation
34. String hashing
35. Prefix function
36. Z function
37. Tries
38. Bit manipulation
39. Subset enumeration
40. Bitset tricks
41. Sweep line
42. Disjoint set union
43. Minimum spanning tree
44. Fenwick tree
45. Segment tree point update
46. Segment tree lazy propagation
47. Sparse table
48. Sqrt decomposition
49. Mo's algorithm
50. Graph traversal
51. Connected components
52. Grid BFS
53. Implicit-state BFS
54. 0-1 BFS
55. Multi-source BFS
56. Dijkstra
57. Bellman-Ford
58. Floyd-Warshall
59. Topological sort
60. DAG dynamic programming
61. Strongly connected components
62. Bridges and articulation points
63. Euler path and circuit
64. Functional graphs
65. Permutation cycles
66. Tree traversal
67. Tree diameter
68. Lowest common ancestor
69. Binary lifting
70. Euler tour
71. Tree dynamic programming
72. Rerooting
73. DSU on tree
74. Small to large merging
75. One-dimensional dynamic programming
76. Knapsack
77. Grid dynamic programming
78. Interval dynamic programming
79. Bitmask dynamic programming
80. Sum over subsets
81. Digit dynamic programming
82. Expected value dynamic programming
83. Probability
84. GCD and LCM
85. Primes and the sieve
86. Divisors
87. Euler phi
88. Chinese remainder theorem
89. Binomial coefficients
90. Catalan numbers
91. Inclusion and exclusion
92. Matrix exponentiation
93. Meet in the middle
94. Nim and parity games
95. Grundy numbers
96. Maximum flow
97. Bipartite matching
98. 2-SAT
99. Geometry basics
100. Convex hull
101. Interactive problems
102. Randomization

### Tier 2

103. Manacher
104. Suffix array
105. Suffix automaton
106. Aho-Corasick
107. Palindromic tree
108. Lyndon decomposition
109. Heavy-light decomposition
110. Centroid decomposition
111. Persistent data structures
112. Balanced binary search tree
113. DSU with rollback
114. Segment tree beats
115. Wavelet tree
116. Sqrt tree
117. Link-cut trees
118. Convex hull trick
119. Li Chao tree
120. Divide and conquer dynamic programming
121. Knuth optimisation
122. Aliens trick
123. Broken profile dynamic programming
124. Berlekamp-Massey
125. Fast Fourier transform
126. Number theoretic transform
127. Polynomial operations
128. Mobius function
129. Dirichlet convolution
130. Miller-Rabin
131. Pollard's rho
132. Discrete logarithm
133. Primitive roots
134. Burnside and Polya
135. Matrix-tree theorem
136. Lindstrom-Gessel-Viennot lemma
137. Linear basis over GF(2)
138. Gaussian elimination
139. Dinic
140. Minimum cost maximum flow
141. Hall's theorem
142. Hungarian algorithm
143. General matching
144. Minimum cut modelling
145. Project selection
146. Half-plane intersection
147. Rotating calipers
148. Minkowski sum
149. Closest pair of points
150. KD-tree
151. Three-dimensional geometry
152. Delaunay triangulation
153. CDQ divide and conquer
154. Parallel binary search
155. Offline query processing
156. Bitset BFS
157. Nim variants
158. Hackenbush
