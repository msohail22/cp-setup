# Review of this problem list

A reviewer went through the topic plan and the first built topic. This file keeps
what it said. It is the reason the files are shaped the way they are.

It is one reviewer's opinion, not a rule. Where it disagrees with how you want to
practice, you win. The parts that are kept below are the parts that changed the
plan.

## The core finding

The problem was never coverage. It was **shape**.

- 35 topics times 100 problems is 3500 problems. At 10 per week that is about
  6.7 years. At 20 per week it is 3.4 years.
- The highest-value topics sat last. DP was 24 to 28. Graphs were 29 to 33.
  Codeforces Div2 C and D are mostly greedy, constructive, DP, graphs and math.
  The old order reached that material in year 3.
- **Solving problems you already know the topic of does not train recognition.**
  100 problems labelled "binary search" train the implementation. A contest
  grades whether you spot that it is binary search at all.

## What changed because of it

| Change | Why |
|---|---|
| Core set marked at the top of every file | The dose that matters is the first 10 to 25, not all of them |
| Everything else kept below as "more practice" | Volume costs nothing when it is not pretending to be the dose |
| Graphs and trees before DP on trees and grids | Tree DP needs rooted-tree traversal first |
| Recursion moved into stage 1 | DFS and every DP need it |
| Expected value moved after DP | Almost every expected-value problem under 2200 is a DP |
| Constructive made a continuous track | It is a style, not a technique with prerequisites |
| AtCoder, Codeforces EDU and USACO Guide added as sources | See "Sources" below |
| Hard tail pushed to the backstop file | A ladder's top should sit near your rating, not 1200 above it |

## The dose

The honest number for muscle memory is **15 to 25 problems solved unaided**, then
leave the topic and meet it again in mixed practice. Past about 30 on one
technique you are rehearsing a pattern you already own.

That is what the core set is. The rest of the file is there for the times a topic
still feels slow and you want more reps in the same band.

Three tiers, by how often the technique actually appears:

- **Tier A, core set of about 25** — binary search, two pointers and sliding
  window, prefix sums, DP 1D, DP knapsack, DP on grids, BFS and DFS, segment
  tree. These recur with variation, so reps pay.
- **Tier B, core set of about 15** — the standard patterns.
- **Tier C, core set of about 10** — rare techniques. More problems often do not
  exist.

## The missing track

The single highest-value addition is not a topic. It is **mixed practice**: two
virtual Div2 contests a week, plus a set of untagged problems at your rating.

Topic files build the tools. Mixed practice is where you learn to pick one
without being told which. Without it, a few thousand solved problems can still
leave a flat rating.

## Techniques that were missing

These were absent from the first 35 topics and appear often in Div2 A to D:

Ad-hoc and invariants and parity arguments, binary search on the answer (a
different skill from binary search on an array), monotonic stack and monotonic
deque, functional graphs and permutation cycles, coordinate compression,
inversions by merge sort or BIT, sweep line, 0-1 BFS and multi-source BFS and
BFS on implicit states, interactive problems, digit DP, inclusion and exclusion,
sparse table and static RMQ, LCA and binary lifting, Euler tour, SCC and
condensation, bridges and articulation points, Euler path, max flow and
bipartite matching and 2-SAT, meet in the middle, ternary search, DSU on tree
and small to large, DAG DP, SOS DP, Grundy numbers, sqrt decomposition and Mo's
algorithm, bitset tricks, randomization against hash attacks.

Already covered, not added: matrix exponentiation (it is Block 8 of the modular
file), divide and conquer (mostly inside sorting and binary search), offline
queries (a technique inside other topics, not a topic).

## Topics that were merged

Each of these was too thin to carry its own file:

- input and output, arithmetic and overflow, arrays and simulation, sorting,
  hash maps and sets -> one implementation topic
- stacks, queues, heaps -> one topic, plus a separate monotonic structures topic
- disjoint set union and minimum spanning tree -> one topic. Kruskal **is** DSU
- topological sort -> absorbed into a DAG topic with DAG DP and SCC
- probability and expected value -> becomes expected-value DP inside the DP stage

## Topics that were split

Each of these was too broad for one file:

- segment tree and Fenwick -> Fenwick with compression, point-update segment
  tree, lazy segment tree
- trees -> tree basics with LCA, then advanced trees
- strings -> string implementation, then string algorithms
- greedy -> exchange argument, interval scheduling, sorting-based greedy
- BFS and DFS -> traversal and connectivity, then grid and implicit-state BFS

## What each source is for

- **Codeforces** — about 70 percent of every file. The only source with ratings,
  tags, volume, editorials and Div2 shape. The only source for constructive,
  interactive and observation problems.
- **CSES** — 300 problems in total and the best-structured set available, but it
  is **consumable**. Spend them once and they are gone. Budget them across
  topics instead of letting the early topics eat the good ones.
- **Kattis** — the only ICPC-style source, and the best answer for geometry,
  sweep line, flows and matching. Difficulty is community-voted and noisy and
  there are no editorials.
- **LeetCode** — good for DP 1D, knapsack, grids, two pointers, sliding window,
  monotonic stack, heaps, basic trees, binary search and bit tricks. It trains
  some wrong instincts: no input parsing, loose time limits, no multi-test-case
  input, and the statement always tells you the shape. Keep it in the warm-up
  and easy blocks.
- **AtCoder** — the Educational DP Contest is 26 problems, one clean DP pattern
  each. The Library Practice Contest is the cleanest intro to DSU, Fenwick,
  segment tree, lazy segment tree, SCC and 2-SAT.
- **Codeforces EDU, ITMO Academy course** — step-by-step segment tree and DSU
  lessons with problems after each step.
- **USACO Guide** — curated per-topic lists with difficulty labels.

## A limit of the backstop files

The backstop is generated from judge tags. **Codeforces has no tag for about 16
of these topics**, so those topics get no backstop:

prefix sums, monotonic stack, coordinate compression, sweep line, sqrt
decomposition and Mo's, LCA and binary lifting, Euler tour, digit DP, SOS DP,
knapsack, topological sort, small to large, functional graphs, inclusion and
exclusion, 0-1 BFS, segment tree.

Worse, stacks, queues, heaps, hash maps, DSU and segment tree all map to the one
`data structures` tag, which holds about 2000 problems. Six topics would receive
six copies of the same undifferentiated list.

For those topics the file is hand-built from CSES sections, LeetCode tags,
AtCoder contests and Kattis search instead.
