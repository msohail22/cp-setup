# Stacks — everything found

Every stack problem the four judges can be made to list. This is the backstop,
not the ladder. Work [stacks.md](stacks.md) first.

How each source was queried, so you can repeat it:

| Source | Query | Precision |
|---|---|---|
| LeetCode | GraphQL `topicTag(slug:"stack")` and `"monotonic-stack"` | exact — real tags |
| Codeforces | `data structures` tag, then name match on bracket/stack/parenthes/histogram/balance | partial — CF has no stack tag |
| CSES | the two problems in the set that are monotonic-stack problems | exact |
| Kattis | `search?q=` for stack, bracket, parenthes, histogram | rough — keyword only |

LeetCode rows marked **premium** need a paid account. 32 of the 182 do.

## Codeforces — name-matched, by rating

Verified live from the API. Not every row is a stack problem; the name matched.
Read the statement first.

| Done | Rating | Problem |
|---|---|---|
| [ ] | — | [2011I. Stack and Queue](https://codeforces.com/problemset/problem/2011/I) |
| [ ] | 1300 | [1237B. Balanced Tunnel](https://codeforces.com/problemset/problem/1237/B) |
| [ ] | 1300 | [1726C. Jatayu's Balanced Bracket Sequence](https://codeforces.com/problemset/problem/1726/C) |
| [ ] | 1400 | [1279C. Stack of Presents](https://codeforces.com/problemset/problem/1279/C) |
| [ ] | 1400 | [612C. Replace To Make Regular Bracket Sequence](https://codeforces.com/problemset/problem/612/C) |
| [ ] | 1500 | [1732D1. Balance (Easy version)](https://codeforces.com/problemset/problem/1732/D1) |
| [ ] | 1700 | [223A. Bracket Sequence](https://codeforces.com/problemset/problem/223/A) |
| [ ] | 1700 | [670E. Correct Bracket Sequence Editor](https://codeforces.com/problemset/problem/670/E) |
| [ ] | 1900 | [5C. Longest Regular Bracket Sequence](https://codeforces.com/problemset/problem/5/C) |
| [ ] | 1900 | [817D. Imbalanced Array](https://codeforces.com/problemset/problem/817/D) |
| [ ] | 2000 | [1237D. Balanced Playlist](https://codeforces.com/problemset/problem/1237/D) |
| [ ] | 2000 | [1976D. Invertible Bracket Sequences](https://codeforces.com/problemset/problem/1976/D) |
| [ ] | 2000 | [380C. Sereja and Brackets](https://codeforces.com/problemset/problem/380/C) |
| [ ] | 2000 | [911E. Stack Sorting](https://codeforces.com/problemset/problem/911/E) |
| [ ] | 2100 | [1299C. Water Balance](https://codeforces.com/problemset/problem/1299/C) |
| [ ] | 2100 | [1838D. Bracket Walk](https://codeforces.com/problemset/problem/1838/D) |
| [ ] | 2200 | [1593G. Changing Brackets](https://codeforces.com/problemset/problem/1593/G) |
| [ ] | 2200 | [756C. Nikita and stack](https://codeforces.com/problemset/problem/756/C) |
| [ ] | 2400 | [1732D2. Balance (Hard version)](https://codeforces.com/problemset/problem/1732/D2) |
| [ ] | 2400 | [1750E. Bracket Cost](https://codeforces.com/problemset/problem/1750/E) |
| [ ] | 2400 | [2032E. Balanced](https://codeforces.com/problemset/problem/2032/E) |
| [ ] | 2400 | [915F. Imbalance Value of a Tree](https://codeforces.com/problemset/problem/915/F) |
| [ ] | 2500 | [1814D. Balancing Weapons](https://codeforces.com/problemset/problem/1814/D) |
| [ ] | 2500 | [2196D. Double Bracket Sequence](https://codeforces.com/problemset/problem/2196/D) |
| [ ] | 2600 | [1223F. Stack Exterminable Arrays](https://codeforces.com/problemset/problem/1223/F) |
| [ ] | 2700 | [524F. And Yet Another Bracket Sequence](https://codeforces.com/problemset/problem/524/F) |
| [ ] | 2800 | [2052G. Geometric Balance](https://codeforces.com/problemset/problem/2052/G) |
| [ ] | 2800 | [2055E. Haystacks](https://codeforces.com/problemset/problem/2055/E) |
| [ ] | 3000 | [2029G. Balanced Problem](https://codeforces.com/problemset/problem/2029/G) |
| [ ] | 3300 | [1876E. Ball-Stackable](https://codeforces.com/problemset/problem/1876/E) |
| [ ] | 3500 | [1237G. Balanced Distribution](https://codeforces.com/problemset/problem/1237/G) |
| [ ] | 3500 | [1503F. Balance the Cards](https://codeforces.com/problemset/problem/1503/F) |

## CSES

| Done | Problem | Note |
|---|---|---|
| [ ] | [Nearest Smaller Values](https://cses.fi/problemset/task/1645) | the canonical monotonic stack |
| [ ] | [Subarray Sum Queries](https://cses.fi/problemset/task/1190) | segment tree, but the same span idea |

## Kattis — keyword matches

| Done | Problem |
|---|---|
| [ ] | [Bracket Matching](https://open.kattis.com/problems/bracketmatching) |
| [ ] | [Brackets](https://open.kattis.com/problems/brackets) |
| [ ] | [Bracket Sequence](https://open.kattis.com/problems/bracketsequence) |
| [ ] | [Bracket Pairing](https://open.kattis.com/problems/bracketpairing) |
| [ ] | [Bracket Guessing](https://open.kattis.com/problems/bracketguessing) |
| [ ] | [Bracket Matrix](https://open.kattis.com/problems/bracketmatrix) |
| [ ] | [Alternative Bracket Notation](https://open.kattis.com/problems/bracketnotation) |
| [ ] | [Enumerating Brackets](https://open.kattis.com/problems/enumeratingbrackets) |
| [ ] | [Stack Construction](https://open.kattis.com/problems/stack) |

## LeetCode

### LeetCode, Stack tag (minus monotonic-stack overlap) — 106 problems

| Done | # | Problem | Level | Access |
|---|---|---|---|---|
| [ ] | 20 | [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/) | Easy | free |
| [ ] | 94 | [Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/) | Easy | free |
| [ ] | 144 | [Binary Tree Preorder Traversal](https://leetcode.com/problems/binary-tree-preorder-traversal/) | Easy | free |
| [ ] | 145 | [Binary Tree Postorder Traversal](https://leetcode.com/problems/binary-tree-postorder-traversal/) | Easy | free |
| [ ] | 225 | [Implement Stack using Queues](https://leetcode.com/problems/implement-stack-using-queues/) | Easy | free |
| [ ] | 232 | [Implement Queue using Stacks](https://leetcode.com/problems/implement-queue-using-stacks/) | Easy | free |
| [ ] | 234 | [Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list/) | Easy | free |
| [ ] | 589 | [N-ary Tree Preorder Traversal](https://leetcode.com/problems/n-ary-tree-preorder-traversal/) | Easy | free |
| [ ] | 590 | [N-ary Tree Postorder Traversal](https://leetcode.com/problems/n-ary-tree-postorder-traversal/) | Easy | free |
| [ ] | 682 | [Baseball Game](https://leetcode.com/problems/baseball-game/) | Easy | free |
| [ ] | 844 | [Backspace String Compare](https://leetcode.com/problems/backspace-string-compare/) | Easy | free |
| [ ] | 897 | [Increasing Order Search Tree](https://leetcode.com/problems/increasing-order-search-tree/) | Easy | free |
| [ ] | 1021 | [Remove Outermost Parentheses](https://leetcode.com/problems/remove-outermost-parentheses/) | Easy | free |
| [ ] | 1047 | [Remove All Adjacent Duplicates In String](https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/) | Easy | free |
| [ ] | 1544 | [Make The String Great](https://leetcode.com/problems/make-the-string-great/) | Easy | free |
| [ ] | 1598 | [Crawler Log Folder](https://leetcode.com/problems/crawler-log-folder/) | Easy | free |
| [ ] | 1614 | [Maximum Nesting Depth of the Parentheses](https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/) | Easy | free |
| [ ] | 1700 | [Number of Students Unable to Eat Lunch](https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/) | Easy | free |
| [ ] | 2000 | [Reverse Prefix of Word](https://leetcode.com/problems/reverse-prefix-of-word/) | Easy | free |
| [ ] | 2696 | [Minimum String Length After Removing Substrings](https://leetcode.com/problems/minimum-string-length-after-removing-substrings/) | Easy | free |
| [ ] | 3174 | [Clear Digits](https://leetcode.com/problems/clear-digits/) | Easy | free |
| [ ] | 71 | [Simplify Path](https://leetcode.com/problems/simplify-path/) | Medium | free |
| [ ] | 114 | [Flatten Binary Tree to Linked List](https://leetcode.com/problems/flatten-binary-tree-to-linked-list/) | Medium | free |
| [ ] | 143 | [Reorder List](https://leetcode.com/problems/reorder-list/) | Medium | free |
| [ ] | 150 | [Evaluate Reverse Polish Notation](https://leetcode.com/problems/evaluate-reverse-polish-notation/) | Medium | free |
| [ ] | 155 | [Min Stack](https://leetcode.com/problems/min-stack/) | Medium | free |
| [ ] | 173 | [Binary Search Tree Iterator](https://leetcode.com/problems/binary-search-tree-iterator/) | Medium | free |
| [ ] | 227 | [Basic Calculator II](https://leetcode.com/problems/basic-calculator-ii/) | Medium | free |
| [ ] | 331 | [Verify Preorder Serialization of a Binary Tree](https://leetcode.com/problems/verify-preorder-serialization-of-a-binary-tree/) | Medium | free |
| [ ] | 341 | [Flatten Nested List Iterator](https://leetcode.com/problems/flatten-nested-list-iterator/) | Medium | free |
| [ ] | 364 | [Nested List Weight Sum II](https://leetcode.com/problems/nested-list-weight-sum-ii/) | Medium | **premium** |
| [ ] | 385 | [Mini Parser](https://leetcode.com/problems/mini-parser/) | Medium | free |
| [ ] | 388 | [Longest Absolute File Path](https://leetcode.com/problems/longest-absolute-file-path/) | Medium | free |
| [ ] | 394 | [Decode String](https://leetcode.com/problems/decode-string/) | Medium | free |
| [ ] | 426 | [Convert Binary Search Tree to Sorted Doubly Linked List](https://leetcode.com/problems/convert-binary-search-tree-to-sorted-doubly-linked-list/) | Medium | **premium** |
| [ ] | 439 | [Ternary Expression Parser](https://leetcode.com/problems/ternary-expression-parser/) | Medium | **premium** |
| [ ] | 445 | [Add Two Numbers II](https://leetcode.com/problems/add-two-numbers-ii/) | Medium | free |
| [ ] | 484 | [Find Permutation](https://leetcode.com/problems/find-permutation/) | Medium | **premium** |
| [ ] | 536 | [Construct Binary Tree from String](https://leetcode.com/problems/construct-binary-tree-from-string/) | Medium | **premium** |
| [ ] | 636 | [Exclusive Time of Functions](https://leetcode.com/problems/exclusive-time-of-functions/) | Medium | free |
| [ ] | 678 | [Valid Parenthesis String](https://leetcode.com/problems/valid-parenthesis-string/) | Medium | free |
| [ ] | 735 | [Asteroid Collision](https://leetcode.com/problems/asteroid-collision/) | Medium | free |
| [ ] | 856 | [Score of Parentheses](https://leetcode.com/problems/score-of-parentheses/) | Medium | free |
| [ ] | 880 | [Decoded String at Index](https://leetcode.com/problems/decoded-string-at-index/) | Medium | free |
| [ ] | 921 | [Minimum Add to Make Parentheses Valid](https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/) | Medium | free |
| [ ] | 946 | [Validate Stack Sequences](https://leetcode.com/problems/validate-stack-sequences/) | Medium | free |
| [ ] | 1003 | [Check If Word Is Valid After Substitutions](https://leetcode.com/problems/check-if-word-is-valid-after-substitutions/) | Medium | free |
| [ ] | 1006 | [Clumsy Factorial](https://leetcode.com/problems/clumsy-factorial/) | Medium | free |
| [ ] | 1087 | [Brace Expansion](https://leetcode.com/problems/brace-expansion/) | Medium | **premium** |
| [ ] | 1111 | [Maximum Nesting Depth of Two Valid Parentheses Strings](https://leetcode.com/problems/maximum-nesting-depth-of-two-valid-parentheses-strings/) | Medium | free |
| [ ] | 1190 | [Reverse Substrings Between Each Pair of Parentheses](https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses/) | Medium | free |
| [ ] | 1209 | [Remove All Adjacent Duplicates in String II](https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/) | Medium | free |
| [ ] | 1214 | [Two Sum BSTs](https://leetcode.com/problems/two-sum-bsts/) | Medium | **premium** |
| [ ] | 1249 | [Minimum Remove to Make Valid Parentheses](https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/) | Medium | free |
| [ ] | 1265 | [Print Immutable Linked List in Reverse](https://leetcode.com/problems/print-immutable-linked-list-in-reverse/) | Medium | **premium** |
| [ ] | 1381 | [Design a Stack With Increment Operation](https://leetcode.com/problems/design-a-stack-with-increment-operation/) | Medium | free |
| [ ] | 1441 | [Build an Array With Stack Operations](https://leetcode.com/problems/build-an-array-with-stack-operations/) | Medium | free |
| [ ] | 1472 | [Design Browser History](https://leetcode.com/problems/design-browser-history/) | Medium | free |
| [ ] | 1541 | [Minimum Insertions to Balance a Parentheses String](https://leetcode.com/problems/minimum-insertions-to-balance-a-parentheses-string/) | Medium | free |
| [ ] | 1586 | [Binary Search Tree Iterator II](https://leetcode.com/problems/binary-search-tree-iterator-ii/) | Medium | **premium** |
| [ ] | 1628 | [Design an Expression Tree With Evaluate Function](https://leetcode.com/problems/design-an-expression-tree-with-evaluate-function/) | Medium | **premium** |
| [ ] | 1653 | [Minimum Deletions to Make String Balanced](https://leetcode.com/problems/minimum-deletions-to-make-string-balanced/) | Medium | free |
| [ ] | 1717 | [Maximum Score From Removing Substrings](https://leetcode.com/problems/maximum-score-from-removing-substrings/) | Medium | free |
| [ ] | 1910 | [Remove All Occurrences of a Substring](https://leetcode.com/problems/remove-all-occurrences-of-a-substring/) | Medium | free |
| [ ] | 1963 | [Minimum Number of Swaps to Make the String Balanced](https://leetcode.com/problems/minimum-number-of-swaps-to-make-the-string-balanced/) | Medium | free |
| [ ] | 2116 | [Check if a Parentheses String Can Be Valid](https://leetcode.com/problems/check-if-a-parentheses-string-can-be-valid/) | Medium | free |
| [ ] | 2130 | [Maximum Twin Sum of a Linked List](https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/) | Medium | free |
| [ ] | 2211 | [Count Collisions on a Road](https://leetcode.com/problems/count-collisions-on-a-road/) | Medium | free |
| [ ] | 2216 | [Minimum Deletions to Make Array Beautiful](https://leetcode.com/problems/minimum-deletions-to-make-array-beautiful/) | Medium | free |
| [ ] | 2375 | [Construct Smallest Number From DI String](https://leetcode.com/problems/construct-smallest-number-from-di-string/) | Medium | free |
| [ ] | 2390 | [Removing Stars From a String](https://leetcode.com/problems/removing-stars-from-a-string/) | Medium | free |
| [ ] | 2434 | [Using a Robot to Print the Lexicographically Smallest String](https://leetcode.com/problems/using-a-robot-to-print-the-lexicographically-smallest-string/) | Medium | free |
| [ ] | 2645 | [Minimum Additions to Make Valid String](https://leetcode.com/problems/minimum-additions-to-make-valid-string/) | Medium | free |
| [ ] | 2764 | [Is Array a Preorder of Some ‌Binary Tree](https://leetcode.com/problems/is-array-a-preorder-of-some-binary-tree/) | Medium | **premium** |
| [ ] | 2816 | [Double a Number Represented as a Linked List](https://leetcode.com/problems/double-a-number-represented-as-a-linked-list/) | Medium | free |
| [ ] | 3170 | [Lexicographically Minimum String After Removing Stars](https://leetcode.com/problems/lexicographically-minimum-string-after-removing-stars/) | Medium | free |
| [ ] | 3412 | [Find Mirror Score of a String](https://leetcode.com/problems/find-mirror-score-of-a-string/) | Medium | free |
| [ ] | 3561 | [Resulting String After Adjacent Removals](https://leetcode.com/problems/resulting-string-after-adjacent-removals/) | Medium | free |
| [ ] | 3703 | [Remove K-Balanced Substrings](https://leetcode.com/problems/remove-k-balanced-substrings/) | Medium | free |
| [ ] | 3746 | [Minimum String Length After Balanced Removals](https://leetcode.com/problems/minimum-string-length-after-balanced-removals/) | Medium | free |
| [ ] | 3834 | [Merge Adjacent Equal Elements](https://leetcode.com/problems/merge-adjacent-equal-elements/) | Medium | free |
| [ ] | 32 | [Longest Valid Parentheses](https://leetcode.com/problems/longest-valid-parentheses/) | Hard | free |
| [ ] | 224 | [Basic Calculator](https://leetcode.com/problems/basic-calculator/) | Hard | free |
| [ ] | 272 | [Closest Binary Search Tree Value II](https://leetcode.com/problems/closest-binary-search-tree-value-ii/) | Hard | **premium** |
| [ ] | 488 | [Zuma Game](https://leetcode.com/problems/zuma-game/) | Hard | free |
| [ ] | 591 | [Tag Validator](https://leetcode.com/problems/tag-validator/) | Hard | free |
| [ ] | 716 | [Max Stack](https://leetcode.com/problems/max-stack/) | Hard | **premium** |
| [ ] | 726 | [Number of Atoms](https://leetcode.com/problems/number-of-atoms/) | Hard | free |
| [ ] | 736 | [Parse Lisp Expression](https://leetcode.com/problems/parse-lisp-expression/) | Hard | free |
| [ ] | 770 | [Basic Calculator IV](https://leetcode.com/problems/basic-calculator-iv/) | Hard | free |
| [ ] | 772 | [Basic Calculator III](https://leetcode.com/problems/basic-calculator-iii/) | Hard | **premium** |
| [ ] | 895 | [Maximum Frequency Stack](https://leetcode.com/problems/maximum-frequency-stack/) | Hard | free |
| [ ] | 936 | [Stamping The Sequence](https://leetcode.com/problems/stamping-the-sequence/) | Hard | free |
| [ ] | 1096 | [Brace Expansion II](https://leetcode.com/problems/brace-expansion-ii/) | Hard | free |
| [ ] | 1106 | [Parsing A Boolean Expression](https://leetcode.com/problems/parsing-a-boolean-expression/) | Hard | free |
| [ ] | 1172 | [Dinner Plate Stacks](https://leetcode.com/problems/dinner-plate-stacks/) | Hard | free |
| [ ] | 1597 | [Build Binary Expression Tree From Infix Expression](https://leetcode.com/problems/build-binary-expression-tree-from-infix-expression/) | Hard | **premium** |
| [ ] | 1896 | [Minimum Cost to Change the Final Value of Expression](https://leetcode.com/problems/minimum-cost-to-change-the-final-value-of-expression/) | Hard | free |
| [ ] | 2019 | [The Score of Students Solving Math Expression](https://leetcode.com/problems/the-score-of-students-solving-math-expression/) | Hard | free |
| [ ] | 2197 | [Replace Non-Coprime Numbers in Array](https://leetcode.com/problems/replace-non-coprime-numbers-in-array/) | Hard | free |
| [ ] | 2296 | [Design a Text Editor](https://leetcode.com/problems/design-a-text-editor/) | Hard | free |
| [ ] | 2524 | [Maximum Frequency Score of a Subarray](https://leetcode.com/problems/maximum-frequency-score-of-a-subarray/) | Hard | **premium** |
| [ ] | 2589 | [Minimum Time to Complete All Tasks](https://leetcode.com/problems/minimum-time-to-complete-all-tasks/) | Hard | free |
| [ ] | 2751 | [Robot Collisions](https://leetcode.com/problems/robot-collisions/) | Hard | free |
| [ ] | 2813 | [Maximum Elegance of a K-Length Subsequence](https://leetcode.com/problems/maximum-elegance-of-a-k-length-subsequence/) | Hard | free |
| [ ] | 3749 | [Evaluate Valid Expressions](https://leetcode.com/problems/evaluate-valid-expressions/) | Hard | **premium** |

### LeetCode, Monotonic Stack tag — 76 problems

| Done | # | Problem | Level | Access |
|---|---|---|---|---|
| [ ] | 496 | [Next Greater Element I](https://leetcode.com/problems/next-greater-element-i/) | Easy | free |
| [ ] | 1475 | [Final Prices With a Special Discount in a Shop](https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/) | Easy | free |
| [ ] | 255 | [Verify Preorder Sequence in Binary Search Tree](https://leetcode.com/problems/verify-preorder-sequence-in-binary-search-tree/) | Medium | **premium** |
| [ ] | 316 | [Remove Duplicate Letters](https://leetcode.com/problems/remove-duplicate-letters/) | Medium | free |
| [ ] | 402 | [Remove K Digits](https://leetcode.com/problems/remove-k-digits/) | Medium | free |
| [ ] | 456 | [132 Pattern](https://leetcode.com/problems/132-pattern/) | Medium | free |
| [ ] | 503 | [Next Greater Element II](https://leetcode.com/problems/next-greater-element-ii/) | Medium | free |
| [ ] | 581 | [Shortest Unsorted Continuous Subarray](https://leetcode.com/problems/shortest-unsorted-continuous-subarray/) | Medium | free |
| [ ] | 654 | [Maximum Binary Tree](https://leetcode.com/problems/maximum-binary-tree/) | Medium | free |
| [ ] | 739 | [Daily Temperatures](https://leetcode.com/problems/daily-temperatures/) | Medium | free |
| [ ] | 769 | [Max Chunks To Make Sorted](https://leetcode.com/problems/max-chunks-to-make-sorted/) | Medium | free |
| [ ] | 853 | [Car Fleet](https://leetcode.com/problems/car-fleet/) | Medium | free |
| [ ] | 901 | [Online Stock Span](https://leetcode.com/problems/online-stock-span/) | Medium | free |
| [ ] | 907 | [Sum of Subarray Minimums](https://leetcode.com/problems/sum-of-subarray-minimums/) | Medium | free |
| [ ] | 962 | [Maximum Width Ramp](https://leetcode.com/problems/maximum-width-ramp/) | Medium | free |
| [ ] | 1008 | [Construct Binary Search Tree from Preorder Traversal](https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/) | Medium | free |
| [ ] | 1019 | [Next Greater Node In Linked List](https://leetcode.com/problems/next-greater-node-in-linked-list/) | Medium | free |
| [ ] | 1081 | [Smallest Subsequence of Distinct Characters](https://leetcode.com/problems/smallest-subsequence-of-distinct-characters/) | Medium | free |
| [ ] | 1124 | [Longest Well-Performing Interval](https://leetcode.com/problems/longest-well-performing-interval/) | Medium | free |
| [ ] | 1130 | [Minimum Cost Tree From Leaf Values](https://leetcode.com/problems/minimum-cost-tree-from-leaf-values/) | Medium | free |
| [ ] | 1504 | [Count Submatrices With All Ones](https://leetcode.com/problems/count-submatrices-with-all-ones/) | Medium | free |
| [ ] | 1574 | [Shortest Subarray to be Removed to Make Array Sorted](https://leetcode.com/problems/shortest-subarray-to-be-removed-to-make-array-sorted/) | Medium | free |
| [ ] | 1673 | [Find the Most Competitive Subsequence](https://leetcode.com/problems/find-the-most-competitive-subsequence/) | Medium | free |
| [ ] | 1762 | [Buildings With an Ocean View](https://leetcode.com/problems/buildings-with-an-ocean-view/) | Medium | **premium** |
| [ ] | 1856 | [Maximum Subarray Min-Product](https://leetcode.com/problems/maximum-subarray-min-product/) | Medium | free |
| [ ] | 1950 | [Maximum of Minimum Values in All Subarrays](https://leetcode.com/problems/maximum-of-minimum-values-in-all-subarrays/) | Medium | **premium** |
| [ ] | 1966 | [Binary Searchable Numbers in an Unsorted Array](https://leetcode.com/problems/binary-searchable-numbers-in-an-unsorted-array/) | Medium | **premium** |
| [ ] | 1996 | [The Number of Weak Characters in the Game](https://leetcode.com/problems/the-number-of-weak-characters-in-the-game/) | Medium | free |
| [ ] | 2104 | [Sum of Subarray Ranges](https://leetcode.com/problems/sum-of-subarray-ranges/) | Medium | free |
| [ ] | 2282 | [Number of People That Can Be Seen in a Grid](https://leetcode.com/problems/number-of-people-that-can-be-seen-in-a-grid/) | Medium | **premium** |
| [ ] | 2289 | [Steps to Make Array Non-decreasing](https://leetcode.com/problems/steps-to-make-array-non-decreasing/) | Medium | free |
| [ ] | 2297 | [Jump Game VIII](https://leetcode.com/problems/jump-game-viii/) | Medium | **premium** |
| [ ] | 2345 | [Finding the Number of Visible Mountains](https://leetcode.com/problems/finding-the-number-of-visible-mountains/) | Medium | **premium** |
| [ ] | 2487 | [Remove Nodes From Linked List](https://leetcode.com/problems/remove-nodes-from-linked-list/) | Medium | free |
| [ ] | 2832 | [Maximal Range That Each Element Is Maximum in It](https://leetcode.com/problems/maximal-range-that-each-element-is-maximum-in-it/) | Medium | **premium** |
| [ ] | 2863 | [Maximum Length of Semi-Decreasing Subarrays](https://leetcode.com/problems/maximum-length-of-semi-decreasing-subarrays/) | Medium | **premium** |
| [ ] | 2865 | [Beautiful Towers I](https://leetcode.com/problems/beautiful-towers-i/) | Medium | free |
| [ ] | 2866 | [Beautiful Towers II](https://leetcode.com/problems/beautiful-towers-ii/) | Medium | free |
| [ ] | 3205 | [Maximum Array Hopping Score I](https://leetcode.com/problems/maximum-array-hopping-score-i/) | Medium | **premium** |
| [ ] | 3221 | [Maximum Array Hopping Score II](https://leetcode.com/problems/maximum-array-hopping-score-ii/) | Medium | **premium** |
| [ ] | 3523 | [Make Array Non-decreasing](https://leetcode.com/problems/make-array-non-decreasing/) | Medium | free |
| [ ] | 3542 | [Minimum Operations to Convert All Elements to Zero](https://leetcode.com/problems/minimum-operations-to-convert-all-elements-to-zero/) | Medium | free |
| [ ] | 3555 | [Smallest Subarray to Sort in Every Sliding Window](https://leetcode.com/problems/smallest-subarray-to-sort-in-every-sliding-window/) | Medium | **premium** |
| [ ] | 3638 | [Maximum Balanced Shipments](https://leetcode.com/problems/maximum-balanced-shipments/) | Medium | free |
| [ ] | 3676 | [Count Bowl Subarrays](https://leetcode.com/problems/count-bowl-subarrays/) | Medium | free |
| [ ] | 4045 | [Count Robot Groups](https://leetcode.com/problems/count-robot-groups/) | Medium | free |
| [ ] | 4054 | [Count Shadow Pairs I](https://leetcode.com/problems/count-shadow-pairs-i/) | Medium | free |
| [ ] | 42 | [Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/) | Hard | free |
| [ ] | 84 | [Largest Rectangle in Histogram](https://leetcode.com/problems/largest-rectangle-in-histogram/) | Hard | free |
| [ ] | 85 | [Maximal Rectangle](https://leetcode.com/problems/maximal-rectangle/) | Hard | free |
| [ ] | 321 | [Create Maximum Number](https://leetcode.com/problems/create-maximum-number/) | Hard | free |
| [ ] | 768 | [Max Chunks To Make Sorted II](https://leetcode.com/problems/max-chunks-to-make-sorted-ii/) | Hard | free |
| [ ] | 975 | [Odd Even Jump](https://leetcode.com/problems/odd-even-jump/) | Hard | free |
| [ ] | 1063 | [Number of Valid Subarrays](https://leetcode.com/problems/number-of-valid-subarrays/) | Hard | **premium** |
| [ ] | 1526 | [Minimum Number of Increments on Subarrays to Form a Target Array](https://leetcode.com/problems/minimum-number-of-increments-on-subarrays-to-form-a-target-array/) | Hard | free |
| [ ] | 1776 | [Car Fleet II](https://leetcode.com/problems/car-fleet-ii/) | Hard | free |
| [ ] | 1793 | [Maximum Score of a Good Subarray](https://leetcode.com/problems/maximum-score-of-a-good-subarray/) | Hard | free |
| [ ] | 1944 | [Number of Visible People in a Queue](https://leetcode.com/problems/number-of-visible-people-in-a-queue/) | Hard | free |
| [ ] | 2030 | [Smallest K-Length Subsequence With Occurrences of a Letter](https://leetcode.com/problems/smallest-k-length-subsequence-with-occurrences-of-a-letter/) | Hard | free |
| [ ] | 2281 | [Sum of Total Strength of Wizards](https://leetcode.com/problems/sum-of-total-strength-of-wizards/) | Hard | free |
| [ ] | 2334 | [Subarray With Elements Greater Than Varying Threshold](https://leetcode.com/problems/subarray-with-elements-greater-than-varying-threshold/) | Hard | free |
| [ ] | 2355 | [Maximum Number of Books You Can Take](https://leetcode.com/problems/maximum-number-of-books-you-can-take/) | Hard | **premium** |
| [ ] | 2454 | [Next Greater Element IV](https://leetcode.com/problems/next-greater-element-iv/) | Hard | free |
| [ ] | 2617 | [Minimum Number of Visited Cells in a Grid](https://leetcode.com/problems/minimum-number-of-visited-cells-in-a-grid/) | Hard | free |
| [ ] | 2736 | [Maximum Sum Queries](https://leetcode.com/problems/maximum-sum-queries/) | Hard | free |
| [ ] | 2818 | [Apply Operations to Maximize Score](https://leetcode.com/problems/apply-operations-to-maximize-score/) | Hard | free |
| [ ] | 2940 | [Find Building Where Alice and Bob Can Meet](https://leetcode.com/problems/find-building-where-alice-and-bob-can-meet/) | Hard | free |
| [ ] | 2945 | [Find Maximum Non-decreasing Array Length](https://leetcode.com/problems/find-maximum-non-decreasing-array-length/) | Hard | free |
| [ ] | 3113 | [Find the Number of Subarrays Where Boundary Elements Are Maximum](https://leetcode.com/problems/find-the-number-of-subarrays-where-boundary-elements-are-maximum/) | Hard | free |
| [ ] | 3229 | [Minimum Operations to Make Array Equal to Target](https://leetcode.com/problems/minimum-operations-to-make-array-equal-to-target/) | Hard | free |
| [ ] | 3359 | [Find Sorted Submatrices With Maximum Element at Most K](https://leetcode.com/problems/find-sorted-submatrices-with-maximum-element-at-most-k/) | Hard | **premium** |
| [ ] | 3420 | [Count Non-Decreasing Subarrays After K Operations](https://leetcode.com/problems/count-non-decreasing-subarrays-after-k-operations/) | Hard | free |
| [ ] | 3430 | [Maximum and Minimum Sums of at Most Size K Subarrays](https://leetcode.com/problems/maximum-and-minimum-sums-of-at-most-size-k-subarrays/) | Hard | free |
| [ ] | 3816 | [Lexicographically Smallest String After Deleting Duplicate Characters](https://leetcode.com/problems/lexicographically-smallest-string-after-deleting-duplicate-characters/) | Hard | free |
| [ ] | 3878 | [Count Good Subarrays](https://leetcode.com/problems/count-good-subarrays/) | Hard | free |
| [ ] | 4055 | [Count Shadow Pairs II](https://leetcode.com/problems/count-shadow-pairs-ii/) | Hard | free |


---

## Reproduce this file

```sh
xh GET "https://codeforces.com/api/problemset.problems?tags=data%20structures" -o ds.json

xh POST https://leetcode.com/graphql Content-Type:application/json Referer:https://leetcode.com/ \
  --raw '{"query":"query t($slug:String!){topicTag(slug:$slug){name questions{questionFrontendId title titleSlug difficulty isPaidOnly}}}","variables":{"slug":"stack"}}'
```

Swap the slug for `monotonic-stack`, `queue`, `heap-priority-queue`,
`union-find`, `segment-tree` and so on. The LeetCode tag slugs are the reason
the data-structure topics can be sorted at all — Codeforces cannot do it.
