# 🚀 Ground-Up C++ DSA Roadmap

Welcome! This is a comprehensive, step-by-step roadmap starting from the absolute basics (syntax, logic, and patterns) all the way up to advanced structures and algorithms. 

You can use this file as a checklist. Mark items with `[x]` as you complete them!

---

## 🗺️ Phase 1: Foundations (The Basics)

### 1.1 C++ Syntax & STL (Standard Template Library)
Before writing algorithms, master the C++ tools.
- [ ] Understand C++ basic I/O, variables, data types, conditional statements, and loops.
- [ ] Learn Functions (Pass by value vs. Pass by reference).
- [ ] **Master STL Containers**: 
  - `std::vector`, `std::pair`, `std::list`, `std::stack`, `std::queue`, `std::priority_queue` (Min/Max Heap).
  - `std::set`, `std::unordered_set` (O(1) average lookup vs. O(log N) ordered).
  - `std::map`, `std::unordered_map`.
- [ ] **Master STL Algorithms**: `std::sort`, `std::reverse`, `std::max_element`, `std::min_element`, `std::accumulate`.

### 1.2 Basic Logic & Mathematics
- [ ] **Count Digits** (e.g., input: 1234 -> output: 4)
- [ ] **Reverse a Number** (e.g., 123 -> 321, check for overflow)
- [ ] **Palindrome Check** (number check, e.g., 121 is a palindrome)
- [ ] **GCD / LCM** (Euclidean algorithm, O(log(min(a,b))))
- [ ] **Print all Divisors** (Optimize to O(sqrt(N)))
- [ ] **Prime Check** (O(sqrt(N)) trial division)

### 1.3 Pattern Printing
Using nested loops to print geometric shapes. This builds deep loop logic.
- [ ] Rectangular Star Pattern
- [ ] Right-Angled Triangle Star Pattern
- [ ] Inverted Right-Angled Triangle
- [ ] Full Pyramid / Diamond Star Pattern

---

## 🔄 Phase 2: Recursion & Sorting

### 2.1 Basic Recursion
Understand call stacks, base cases, and return statements.
- [ ] Print 1 to N / N to 1 recursively.
- [ ] Sum of first N numbers / Factorial of N.
- [ ] Reverse an array using recursion.
- [ ] Check if a string is a palindrome.
- [ ] Fibonacci Number (recursion tree visualization).

### 2.2 Basic Hashing
- [ ] Count frequency of array elements (using array-based hashing / hash maps).
- [ ] Find the highest and lowest frequency element.

### 2.3 Sorting Algorithms
Implement these sorting algorithms from scratch:
- [ ] **Selection Sort**: Find minimum, swap with front (O(N²)).
- [ ] **Bubble Sort**: Push maximum to the end by adjacent swaps (O(N²)).
- [ ] **Insertion Sort**: Take elements and place them in correct position (O(N²)).
- [ ] **Merge Sort**: Divide and Conquer, merge two sorted arrays (O(N log N)).
- [ ] **Quick Sort**: Partition around pivot, sorting elements relative to pivot (O(N log N)).

---

## 📊 Phase 3: Arrays & Binary Search

### 3.1 Arrays (Easy)
- [ ] **Largest & Second Largest** element in an array.
- [ ] **Check if array is sorted** and rotated.
- [ ] **Remove duplicates** from a sorted array.
- [ ] **Left/Right rotate** an array by D places.
- [ ] **Move Zeroes** to the end of the array.
- [ ] **Union / Intersection** of two sorted arrays.
- [ ] **Find missing number** in an array.
- [ ] **Maximum Consecutive Ones**.

### 3.2 Arrays (Medium)
- [ ] **Two Sum** (using maps / two-pointer approach).
- [ ] **Sort Colors** / Sort 0s, 1s, 2s (Dutch National Flag Algorithm).
- [ ] **Majority Element** (Boyer-Moore Voting Algorithm).
- [ ] **Maximum Subarray Sum** (Kadane’s Algorithm).
- [ ] **Stock Buy and Sell**.
- [ ] **Rearrange Array Elements** by sign (+ve and -ve).
- [ ] **Next Permutation** (Lexicographical generation).
- [ ] **Leaders in an Array**.
- [ ] **Longest Consecutive Sequence** in an array.
- [ ] **Set Matrix Zeroes**.
- [ ] **Rotate Image / Matrix by 90 degrees**.
- [ ] **Spiral Matrix** traversal.

### 3.3 Arrays (Hard)
- [ ] **Pascal’s Triangle**.
- [ ] **3-Sum** and **4-Sum** (Two pointer optimization).
- [ ] **Merge Overlapping Intervals**.
- [ ] **Merge Sorted Arrays** without extra space.
- [ ] **Find the Duplicate Number** (Floyd's Cycle detection).
- [ ] **Missing and Repeating Number**.
- [ ] **Count Inversions** (Merge sort modification).
- [ ] **Reverse Pairs** (LeetCode 493).

### 3.4 Binary Search (BS)
- [ ] **Binary Search** implementation (Iterative & Recursive).
- [ ] **Lower Bound & Upper Bound** search.
- [ ] **Search Insert Position**.
- [ ] **Find First and Last Position** of an element in sorted array.
- [ ] **Search in Rotated Sorted Array** (With/Without duplicates).
- [ ] **Find Minimum in Rotated Sorted Array**.
- [ ] **Find Peak Element**.
- [ ] **BS on Answers**:
  - Square root of a number.
  - N-th root of an integer.
  - Koko Eating Bananas.
  - Capacity to Ship Packages.
  - Allocate Books / Split Array Largest Sum.

---

## 🔗 Phase 4: Linked Lists & String Manipulation

### 4.1 Linked Lists (Singly & Doubly)
- [ ] **Linked List Basics**: Array to LL, insertion, deletion, length.
- [ ] **Reverse Linked List** (Iterative & Recursive).
- [ ] **Middle of a Linked List** (Slow & Fast Pointers).
- [ ] **Detect Cycle in LL** (Tortoise and Hare).
- [ ] **Find Start Node of Cycle** and **Cycle Length**.
- [ ] **Check if LL is Palindrome**.
- [ ] **Odd Even Linked List**.
- [ ] **Remove N-th Node From End of List**.
- [ ] **Intersection Point of Two LLs**.
- [ ] **Add Two Numbers represented as LLs**.
- [ ] **Merge Two Sorted Lists**.
- [ ] **Flattening a Linked List**.

### 4.2 Strings
- [ ] **Reverse Words in a String**.
- [ ] **Largest Odd Number in String**.
- [ ] **Longest Common Prefix**.
- [ ] **Isomorphic Strings**.
- [ ] **Valid Anagram**.
- [ ] **String to Integer (atoi)** implementation.
- [ ] **Longest Palindromic Substring**.
- [ ] **Rabin-Karp / KMP Algorithm** (Pattern matching).

---

## 📥 Phase 5: Stacks, Queues & Backtracking

### 5.1 Stacks & Queues
- [ ] **Implement Stack using Arrays** and **using Queues**.
- [ ] **Implement Queue using Arrays** and **using Stacks**.
- [ ] **Valid Parentheses** (Stack usage).
- [ ] **Min Stack** (Get minimum element in O(1) time).
- [ ] **Monotonic Stack Pattern**:
  - Next Greater Element I & II.
  - Next Smaller Element.
  - Largest Rectangle in Histogram.
  - Sliding Window Maximum.

### 5.2 Advanced Backtracking
- [ ] **Subset Sums** (Generating combinations).
- [ ] **Combination Sum I & II**.
- [ ] **Permutations** (Recursion tree generation).
- [ ] **N-Queens**.
- [ ] **Sudoku Solver**.
- [ ] **Rat in a Maze**.

---

## 🌲 Phase 6: Trees, BST & Heaps

### 6.1 Binary Trees
- [ ] **Tree Traversals**: Preorder, Inorder, Postorder (Iterative & Recursive).
- [ ] **Level Order Traversal** (BFS).
- [ ] **Height / Depth** of Binary Tree.
- [ ] **Diameter of Binary Tree**.
- [ ] **Check if Tree is Balanced**.
- [ ] **Lowest Common Ancestor (LCA)**.
- [ ] **Identical Trees Check**.
- [ ] **Zig-Zag Level Order Traversal**.
- [ ] **Boundary / Vertical Order Traversal**.
- [ ] **Top View / Bottom View** of Binary Tree.
- [ ] **Left View / Right View** of Binary Tree.

### 6.2 Binary Search Trees (BST)
- [ ] **Search & Insert** in BST.
- [ ] **Delete Node** in BST.
- [ ] **K-th Smallest / Largest** element in BST.
- [ ] **Validate Binary Search Tree**.
- [ ] **Lowest Common Ancestor** in BST.
- [ ] **Construct BST** from Preorder Traversal.

### 6.3 Heaps & Priority Queues
- [ ] **Implement Heap** (Max-Heap/Min-Heap) from scratch (Heapify, Push, Pop).
- [ ] **K-th Largest / Smallest** element in an array.
- [ ] **Merge K Sorted Lists**.
- [ ] **Find Median from Data Stream**.

---

## 🕸️ Phase 7: Graphs & Dynamic Programming

### 7.1 Graphs
- [ ] **Graph Representation**: Adjacency Matrix & Adjacency List.
- [ ] **BFS & DFS Traversal**.
- [ ] **Cycle Detection** (Directed & Undirected Graphs).
- [ ] **Topological Sort** (Kahn's Algorithm BFS & DFS).
- [ ] **Shortest Path Algorithms**:
  - Dijkstra’s Algorithm (Weighted Undirected).
  - Bellman-Ford Algorithm (Handles negative weights).
  - Floyd-Warshall Algorithm (All-pairs shortest path).
- [ ] **Minimum Spanning Tree (MST)**:
  - Prim’s Algorithm.
  - Kruskal’s Algorithm.
- [ ] **Disjoint Set Union (DSU)**: Find by rank & path compression.

### 7.2 Dynamic Programming (DP)
- [ ] **1D DP**:
  - Fibonacci & Climbing Stairs.
  - Frog Jump.
  - House Robber / Maximum Sum of Non-Adjacent Elements.
- [ ] **2D/3D DP on Grids**:
  - Unique Paths.
  - Minimum Path Sum.
  - Cherry Pickup.
- [ ] **DP on Subsets**:
  - Subset Sum / Partition Equal Subset Sum.
  - 0/1 Knapsack.
  - Target Sum / Coin Change.
- [ ] **DP on Strings**:
  - Longest Common Subsequence (LCS).
  - Longest Palindromic Subsequence.
  - Edit Distance.
- [ ] **DP on Stocks** (Buy & Sell Stocks I to VI).
- [ ] **DP on LIS (Longest Increasing Subsequence)**.
