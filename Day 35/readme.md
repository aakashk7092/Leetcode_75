# Day 35 – Count Good Nodes in Binary Tree

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Binary Tree, DFS, Recursion  
**Status:** Completed  

---

## Problem Overview
You are given the root of a binary tree.

A node **X** in the tree is considered **good** if:
- On the path from the root to node **X**,  
- There are **no nodes with a value greater than X**.

Your task is to count the total number of **good nodes** in the tree.

---

## Key Observations
- The decision of whether a node is “good” depends on the **maximum value seen so far** on the path from the root.
- Each node must be evaluated in the context of its path.
- A depth-first traversal is ideal for carrying path-related information.

---

## Approach
Use **Depth-First Search (DFS)** with an additional parameter:

- While traversing the tree, maintain the **maximum value encountered so far**.
- At each node:
  - If the node’s value is greater than or equal to this maximum, it is a **good node**.
  - Update the maximum value before moving to children.
- Recursively apply this logic to both left and right subtrees.

This ensures that every node is evaluated correctly based on its path.

---

## Algorithm Summary
1. Start DFS from the root with the root’s value as the initial maximum.
2. At each node:
   - Check if it qualifies as a good node.
   - Update the maximum value if needed.
3. Recursively process left and right subtrees.
4. Sum and return the total count of good nodes.

---

## Complexity Analysis
- **Time Complexity:** `O(n)`  
  (`n` = number of nodes in the tree)
- **Space Complexity:** `O(h)`  
  (`h` = height of the tree due to recursion stack)

---

## Key Learnings
- Passing state information through recursive calls
- Evaluating nodes based on path-dependent conditions
- Using DFS effectively for tree problems
- Writing clean recursive logic with accumulative results

---

## Reference
- Study Plan: https://leetcode.com/studyplan/leetcode-75/  
- Problem Platform: LeetCode
