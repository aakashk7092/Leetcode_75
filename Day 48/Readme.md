# Day 48 – Rotting Oranges

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Graph, BFS, Matrix, Multi-Source BFS  
**Status:** Completed  

---

## Problem Overview

You are given a grid representing oranges:

- `0` → Empty cell  
- `1` → Fresh orange  
- `2` → Rotten orange  

Every minute, any fresh orange that is adjacent (up, down, left, right) to a rotten orange becomes rotten.

Your task is to return the **minimum number of minutes required to rot all oranges**.

If it is impossible, return `-1`.

---

## Key Observations

- Rot spreads level by level.
- Multiple rotten oranges can spread rot simultaneously.
- This is a classic **Multi-Source BFS problem**.
- Each rotten orange acts as a starting source.

---

## Why Multi-Source BFS?

Because:

- Rot spreads from multiple cells at the same time.
- BFS naturally processes in layers (minutes).
- Each BFS level represents one minute.

---

## Approach

1. Traverse the grid.
2. Add all rotten oranges to the queue with time = 0.
3. Perform BFS traversal.
4. Spread rot to adjacent fresh oranges.
5. Track the maximum time taken.
6. After BFS, check if any fresh orange remains.
7. If yes → return -1  
8. Otherwise → return total time.

---

## Movement Directions

Up → (-1, 0)
Down → (+1, 0)
Left → (0, -1)
Right → (0, +1)

---

<img width="985" height="346" alt="image" src="https://github.com/user-attachments/assets/a170188f-89eb-496a-b861-4bce1af96737" />



---

## Algorithm Summary

1. Add all rotten oranges to queue.
2. Run BFS traversal.
3. Spread rot to adjacent fresh oranges.
4. Track time using BFS levels.
5. Check if any fresh orange remains.
6. Return result.

---

## Complexity Analysis

Let:

n = number of rows
m = number of columns


**Time Complexity:** O(n × m)

**Space Complexity:** O(n × m)

---

## Key Learnings

- Multi-Source BFS concept
- Grid traversal using BFS
- Layer-based propagation simulation
- Real-world modeling using graph traversal

---

## Pattern Identified

Multi-Source BFS  
Grid Traversal  
Shortest Time Simulation  

---

## Reference

Study Plan: https://leetcode.com/studyplan/leetcode-75/  
Problem: LeetCode – Rotting Oranges
