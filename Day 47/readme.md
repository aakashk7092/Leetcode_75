# Day 47 – Nearest Exit from Entrance in Maze

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Graph, BFS, Matrix, Shortest Path  
**Status:** Completed  

---

## Problem Overview

You are given a 2D maze represented as a grid:

- '.' → empty cell (can move)
- '+' → wall (cannot move)

You are also given the entrance position.

Your task is to find the **minimum number of steps to reach the nearest exit**.

Exit conditions:
- Exit must be on the boundary of the maze
- Entrance itself is NOT considered an exit

Return the minimum steps, or `-1` if no exit exists.

---

## Key Observations

- The maze can be treated as a graph.
- Each cell represents a node.
- Movement is allowed in 4 directions:
  - Up
  - Down
  - Left
  - Right
- We need the **shortest path**, so BFS is the optimal approach.

---

## Why BFS?

BFS guarantees:

- First time reaching an exit = shortest distance
- Level-by-level traversal ensures minimum steps

DFS cannot guarantee shortest path.

---

## Approach

Use **Breadth-First Search (BFS)**:

1. Start BFS from entrance.
2. Mark entrance as visited.
3. Explore all 4 directions.
4. If a boundary cell is reached (not entrance), return steps.
5. Continue until exit is found or queue is empty.
6. If no exit found, return -1.

---

## Movement Directions

Right → (0, +1)
Left → (0, -1)
Down → (+1, 0)
Up → (-1, 0)

---

## Example

<img width="586" height="532" alt="image" src="https://github.com/user-attachments/assets/c12a74c2-50ab-4bf3-b2f9-43cfc2813835" />

---

---

## Algorithm Summary

1. Initialize queue with entrance.
2. Mark entrance visited.
3. Perform BFS traversal.
4. Check if boundary cell reached.
5. Return steps when exit found.
6. Otherwise return -1.

---

## Complexity Analysis

Let:

m = number of rows
n = number of columns

**Time Complexity:** O(m × n)

**Space Complexity:** O(m × n)

---

## Key Learnings

- BFS is best for shortest path in unweighted grid
- Level-based traversal ensures minimum distance
- Graph concepts apply directly to grid problems
- Efficient handling using queue

---

## Pattern Identified

Grid Traversal + BFS + Shortest Path

---

## Visual Representation

Example BFS expansion:

Entrance
↓
Step 1 cells
↓
Step 2 cells
↓
Exit found

---

## Reference

Study Plan: https://leetcode.com/studyplan/leetcode-75/  
Problem: LeetCode – Nearest Exit from Entrance in Maze



