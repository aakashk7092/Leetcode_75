# Day 39 – Binary Tree Right Side View

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Binary Tree, DFS, Tree Traversal  
**Status:** Completed  

---

## Problem Overview
You are given the root of a binary tree.

Imagine standing on the **right side** of the tree.  
Your task is to return the values of the nodes that are **visible from the right side**, ordered from top to bottom.

At each level, only the **rightmost node** is visible.

---

## Key Observations
- Each tree level contributes exactly one visible node.
- The first node encountered at each level from the right side is the visible one.
- A modified DFS traversal visiting the **right child before the left child** ensures correct order.

---

## Approach
Use a **modified preorder DFS traversal**:

Traversal order:
