# Day 44 – Number of Provinces

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Graph, DFS, Connected Components  
**Status:** Completed  

---

## Problem Overview

You are given an `n x n` matrix `isConnected` where:

- `isConnected[i][j] = 1` → city i and city j are directly connected  
- `isConnected[i][j] = 0` → no direct connection  

A **province** is a group of directly or indirectly connected cities.

Your task is to return the **total number of provinces**.

---

## Key Observations

- This is a classic **Connected Components problem** in Graph.
- Each city represents a node.
- The matrix represents graph connections.
- We must count how many disconnected groups exist.

---

## Graph Visualization Example

Input:
[
[1,1,0],
[1,1,0],
[0,0,1]
]

Graph:

0 —— 1 2

Province 1: {0,1}
Province 2: {2}

Answer = 2


---

## Approach

Use **Depth-First Search (DFS)**:

1. Create a visited array to track visited cities.
2. Traverse each city from 0 to n-1.
3. If a city is not visited:
   - It means a new province is found.
   - Increment province count.
   - Run DFS to mark all connected cities as visited.
4. Continue until all cities are processed.

---

## Algorithm Summary

1. Initialize visited array.
2. Loop through each city.
3. If city not visited:
   - Increment province count.
   - Run DFS.
4. Return province count.

---

## Complexity Analysis

**Time Complexity:** O(n²)  
- Matrix traversal

**Space Complexity:** O(n)  
- visited array  
- recursion stack

---

## Key Learnings

- Understanding Connected Components in Graph
- Using DFS with adjacency matrix
- Identifying separate graph groups
- Applying graph traversal in real-world problems

---

## Pattern Identified

Graph Traversal + Connected Components  
Solved using DFS / BFS

---

## Reference

Study Plan: https://leetcode.com/studyplan/leetcode-75/  
Problem: LeetCode – Number of Provinces
