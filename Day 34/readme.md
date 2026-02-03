# Day 34 – Leaf-Similar Trees

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Easy  
**Topics:** Binary Tree, DFS, Tree Traversal  
**Status:** Completed  

---

## Problem Overview
You are given the roots of two binary trees, `root1` and `root2`.

Two binary trees are considered **leaf-similar** if the sequence of their **leaf node values**, read from left to right, is exactly the same.

Your task is to determine whether the two trees are leaf-similar.

---

## Key Observations
- Only **leaf nodes** matter; internal nodes are ignored.
- The order of leaf values must be preserved.
- A depth-first traversal is well-suited to collect leaf nodes in order.

---

## Approach
Use **Depth-First Search (DFS)** traversal:

1. Traverse each tree recursively.
2. Whenever a leaf node is encountered (a node with no left or right child):
   - Record its value in a sequence.
3. After traversing both trees:
   - Compare the two sequences.
4. If the sequences are identical, the trees are leaf-similar.

This approach ensures that leaf nodes are collected in the correct left-to-right order.

---

## Algorithm Summary
1. Initialize empty sequences for both trees.
2. Perform DFS traversal on each tree.
3. Collect values of leaf nodes only.
4. Compare the two resulting sequences.
5. Return `true` if they match; otherwise, return `false`.

---

## Complexity Analysis
- **Time Complexity:** `O(n + m)`  
  (`n` and `m` are the number of nodes in each tree)
- **Space Complexity:** `O(h1 + h2)`  
  (recursive stack space, where `h` is the height of the trees)

---

## Key Learnings
- Identifying and processing only leaf nodes in trees
- Using DFS for ordered traversal
- Comparing structural properties of trees through traversal results
- Writing clean recursive solutions for tree problems

---

## Reference
- Study Plan: https://leetcode.com/studyplan/leetcode-75/  
- Problem Platform: LeetCode
