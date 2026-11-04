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
2. [Integer overflow and types](integer%20overflow%20and%20types/) — done
3. [Arrays](arrays/) — done
4. [Sorting](sorting/) — done
5. [Frequency counting](frequency%20counting/) — done
6. [Hash maps and sets](hash%20maps%20and%20sets/) — done
7. [Ad-hoc observation](ad-hoc%20observation/) — done
8. [Invariants](invariants/) — done
9. [Parity arguments](parity%20arguments/) — done
10. [Recursion](recursion/) — done
11. [Backtracking](backtracking/) — done
12. [Modular arithmetic](modular%20arithmetic/) — done
13. [Fast exponentiation](fast%20exponentiation/) — done
14. [Modular inverse](modular%20inverse/) — done
15. [Binary search on a sorted array](binary%20search%20on%20a%20sorted%20array/) — done
16. [Binary search on the answer](binary%20search%20on%20the%20answer/) — done
17. [Ternary search](ternary%20search/) — done
18. [Two pointers](two%20pointers/) — done
19. [Sliding window](sliding%20window/) — done
20. [Prefix sums](prefix%20sums/) — done
21. [Difference arrays](difference%20arrays/) — done
22. [Coordinate compression](coordinate%20compression/) — done
23. [Inversion counting](inversion%20counting/) — done
24. [Exchange argument greedy](exchange%20argument%20greedy/) — done
25. [Interval scheduling](interval%20scheduling/) — done
26. [Constructive problems](constructive%20problems/) — done
27. [Linked lists](linked%20lists/) — done
28. [Stacks](stacks/) — done
29. [Queues](queues/) — done
30. [Deques](deques/) — done
31. [Heaps and priority queues](heaps%20and%20priority%20queues/) — done
32. [Monotonic stack](monotonic%20stack/) — done
33. [Monotonic deque](monotonic%20deque/) — done
34. [String implementation](string%20implementation/) — done
35. [String hashing](string%20hashing/) — done
36. [Prefix function](prefix%20function/) — done
37. [Z function](z%20function/) — done
38. [Tries](tries/) — done
39. [Bit manipulation](bit%20manipulation/) — done
40. [Subset enumeration](subset%20enumeration/) — done
41. [Bitset tricks](bitset%20tricks/) — done
42. [Sweep line](sweep%20line/) — done
43. [Disjoint set union](disjoint%20set%20union/) — done
44. [Minimum spanning tree](minimum%20spanning%20tree/) — done
45. [Fenwick tree](fenwick%20tree/) — done
46. [Segment tree point update](segment%20tree%20point%20update/) — done
47. [Segment tree lazy propagation](segment%20tree%20lazy%20propagation/) — done
48. [Sparse table](sparse%20table/) — done
49. [Sqrt decomposition](sqrt%20decomposition/) — done
50. [Mo's algorithm](mo%27s%20algorithm/) — done
51. [Graph traversal](graph%20traversal/) — done
52. [Connected components](connected%20components/) — done
53. [Grid BFS](grid%20bfs/) — done
54. [Implicit-state BFS](implicit-state%20bfs/) — done
55. [0-1 BFS](0-1%20bfs/) — done
56. [Multi-source BFS](multi-source%20bfs/) — done
57. [Dijkstra](dijkstra/) — done
58. [Bellman-Ford](bellman-ford/) — done
59. [Floyd-Warshall](floyd-warshall/) — done
60. [Topological sort](topological%20sort/) — done
61. [DAG dynamic programming](dag%20dynamic%20programming/) — done
62. [Strongly connected components](strongly%20connected%20components/) — done
63. [Bridges and articulation points](bridges%20and%20articulation%20points/) — done
64. [Euler path and circuit](euler%20path%20and%20circuit/) — done
65. [Functional graphs](functional%20graphs/) — done
66. [Permutation cycles](permutation%20cycles/) — done
67. [Tree traversal](tree%20traversal/) — done
68. [Tree diameter](tree%20diameter/) — done
69. [Lowest common ancestor](lowest%20common%20ancestor/) — done
70. [Binary lifting](binary%20lifting/) — done
71. [Euler tour](euler%20tour/) — done
72. [Tree dynamic programming](tree%20dynamic%20programming/) — done
73. [Rerooting](rerooting/) — done
74. [DSU on tree](dsu%20on%20tree/) — done
75. [Small to large merging](small%20to%20large%20merging/) — done
76. [One-dimensional dynamic programming](one-dimensional%20dynamic%20programming/) — done
77. [Knapsack](knapsack/) — done
78. [Grid dynamic programming](grid%20dynamic%20programming/) — done
79. [Interval dynamic programming](interval%20dynamic%20programming/) — done
80. [Bitmask dynamic programming](bitmask%20dynamic%20programming/) — done
81. [Sum over subsets](sum%20over%20subsets/) — done
82. [Digit dynamic programming](digit%20dynamic%20programming/) — done
83. [Expected value dynamic programming](expected%20value%20dynamic%20programming/) — done
84. [Probability](probability/) — done
85. [GCD and LCM](gcd%20and%20lcm/) — done
86. [Primes and the sieve](primes%20and%20the%20sieve/) — done
87. [Divisors](divisors/) — done
88. [Euler phi](euler%20phi/) — done
89. [Chinese remainder theorem](chinese%20remainder%20theorem/) — done
90. [Binomial coefficients](binomial%20coefficients/) — done
91. [Catalan numbers](catalan%20numbers/) — done
92. [Inclusion and exclusion](inclusion%20and%20exclusion/) — done
93. [Matrix exponentiation](matrix%20exponentiation/) — done
94. [Meet in the middle](meet%20in%20the%20middle/) — done
95. [Nim and parity games](nim%20and%20parity%20games/) — done
96. [Grundy numbers](grundy%20numbers/) — done
97. [Maximum flow](maximum%20flow/) — done
98. [Bipartite matching](bipartite%20matching/) — done
99. [2-SAT](2-sat/) — done
100. [Geometry basics](geometry%20basics/) — done
101. [Convex hull](convex%20hull/) — done
102. [Interactive problems](interactive%20problems/) — done
103. [Randomization](randomization/) — done

### Tier 2

104. [Manacher](manacher/) — done
105. [Suffix array](suffix%20array/) — done
106. [Suffix automaton](suffix%20automaton/) — done
107. [Aho-Corasick](aho-corasick/) — done
108. [Palindromic tree](palindromic%20tree/) — done
109. [Lyndon decomposition](lyndon%20decomposition/) — done
110. [Heavy-light decomposition](heavy-light%20decomposition/) — done
111. [Centroid decomposition](centroid%20decomposition/) — done
112. [Persistent data structures](persistent%20data%20structures/) — done
113. [Balanced binary search tree](balanced%20binary%20search%20tree/) — done
114. [DSU with rollback](dsu%20with%20rollback/) — done
115. [Segment tree beats](segment%20tree%20beats/) — done
116. [Wavelet tree](wavelet%20tree/) — done
117. [Sqrt tree](sqrt%20tree/) — done
118. [Link-cut trees](link-cut%20trees/) — done
119. [Convex hull trick](convex%20hull%20trick/) — done
120. [Li Chao tree](li%20chao%20tree/) — done
121. [Divide and conquer dynamic programming](divide%20and%20conquer%20dynamic%20programming/) — done
122. [Knuth optimisation](knuth%20optimisation/) — done
123. [Aliens trick](aliens%20trick/) — done
124. [Broken profile dynamic programming](broken%20profile%20dynamic%20programming/) — done
125. [Berlekamp-Massey](berlekamp-massey/) — done
126. [Fast Fourier transform](fast%20fourier%20transform/) — done
127. [Number theoretic transform](number%20theoretic%20transform/) — done
128. [Polynomial operations](polynomial%20operations/) — done
129. [Mobius function](mobius%20function/) — done
130. [Dirichlet convolution](dirichlet%20convolution/) — done
131. [Miller-Rabin](miller-rabin/) — done
132. [Pollard's rho](pollard%27s%20rho/) — done
133. [Discrete logarithm](discrete%20logarithm/) — done
134. [Primitive roots](primitive%20roots/) — done
135. [Burnside and Polya](burnside%20and%20polya/) — done
136. [Matrix-tree theorem](matrix-tree%20theorem/) — done
137. [Lindstrom-Gessel-Viennot lemma](lindstrom-gessel-viennot%20lemma/) — done
138. [Linear basis over GF(2)](linear%20basis%20over%20gf%282%29/) — done
139. [Gaussian elimination](gaussian%20elimination/) — done
140. [Dinic](dinic/) — done
141. [Minimum cost maximum flow](minimum%20cost%20maximum%20flow/) — done
142. [Hall's theorem](hall%27s%20theorem/) — done
143. [Hungarian algorithm](hungarian%20algorithm/) — done
144. [General matching](general%20matching/) — done
145. [Minimum cut modelling](minimum%20cut%20modelling/) — done
146. [Project selection](project%20selection/) — done
147. [Half-plane intersection](half-plane%20intersection/) — done
148. [Rotating calipers](rotating%20calipers/) — done
149. [Minkowski sum](minkowski%20sum/) — done
150. [Closest pair of points](closest%20pair%20of%20points/) — done
151. [KD-tree](kd-tree/) — done
152. [Three-dimensional geometry](three-dimensional%20geometry/) — done
153. [Delaunay triangulation](delaunay%20triangulation/) — done
154. [CDQ divide and conquer](cdq%20divide%20and%20conquer/) — done
155. [Parallel binary search](parallel%20binary%20search/) — done
156. [Offline query processing](offline%20query%20processing/) — done
157. [Bitset BFS](bitset%20bfs/) — done
158. [Nim variants](nim%20variants/) — done
159. [Hackenbush](hackenbush/) — done
