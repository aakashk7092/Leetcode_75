# Day 36 – Path Sum III

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Binary Tree, DFS, Recursion  
**Status:** Completed  

---

## Problem Overview
You are given the root of a binary tree and an integer `targetSum`.

Your task is to count the number of **paths** where:
- The sum of node values equals `targetSum`
- The path must move **downward** (from parent to child)
- The path can start and end at **any node**

---

## Key Observations
- Paths do not necessarily start at the root.
- Every node can act as a starting point for valid paths.
- DFS traversal is required to explore all possible paths.
- For each node, we need to check all downward paths starting from that node.

---

## Approach
Use **two levels of DFS traversal**:

### Level 1: Start Path from Every Node
- Treat each node as a potential starting point.
- For each node, calculate the number of valid paths that start from it.

### Level 2: Path Tracking DFS
- Traverse downward while subtracting the current node value from the target.
- If the remaining target becomes zero, a valid path is found.
- Continue traversal to explore longer paths.

This ensures all valid downward paths are counted.

---

## Algorithm Summary
1. If the tree is empty, return 0.
2. For each node:
   - Count paths starting from that node.
   - Recursively repeat for left and right subtrees.
3. During traversal:
   - Subtract node value from the remaining target.
   - Increment count when target becomes zero.
4. Return the total count.

---

## Complexity Analysis
- **Time Complexity:** `O(n²)` in worst case  
  (each node may start a DFS traversal)
- **Space Complexity:** `O(h)`  
  (`h` = height of the tree due to recursion stack)

---

## Key Learnings
- Understanding multiple DFS traversals within tree problems
- Exploring all possible path combinations
- Tracking running sum dynamically
- Writing recursive solutions for path-based tree problems

---

## Reference
- Study Plan: https://leetcode.com/studyplan/leetcode-75/  
- Problem Platform: LeetCode
