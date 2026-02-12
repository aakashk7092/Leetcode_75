# Day 43 – Keys and Rooms

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Graph, DFS, Recursion  
**Status:** Completed  

---

## Problem Overview

You are given `n` rooms labeled from `0` to `n-1`.

Each room contains keys to other rooms.  
Room `0` is unlocked initially, and all other rooms are locked.

Your task is to determine whether you can visit **all rooms** using the available keys.

---

## Key Observations

- Each room represents a node.
- Each key represents a directed edge to another node.
- This forms a **graph traversal problem**.
- We need to check if all nodes are reachable from node `0`.

---

## Approach

Use **Depth-First Search (DFS)**:

1. Start DFS traversal from room `0`.
2. Mark the current room as visited.
3. Visit all rooms whose keys are present in the current room.
4. Continue recursively until no new rooms can be visited.
5. After traversal, check if all rooms were visited.

If yes → return true  
Otherwise → return false

---

## Graph Representation

Example:

rooms = [[1], [2], [3], []]

Graph:

0 → 1 → 2 → 3


All rooms are reachable → Answer = true

---

## Algorithm Summary

1. Create a visited array of size `n`.
2. Start DFS from room `0`.
3. Mark visited rooms during traversal.
4. After DFS, check visited array.
5. If any room is unvisited → return false
6. Otherwise → return true

---

## Complexity Analysis

**Time Complexity:** O(n + e)  
- n = number of rooms  
- e = number of keys  

**Space Complexity:** O(n)  
- visited array  
- recursion stack  

---

## Key Learnings

- Modeling real-world problems as graphs
- Using DFS to check connectivity
- Understanding reachability problems
- Applying recursion in graph traversal

---

## Pattern Identified

This is a classic:

Graph Reachability Problem  
Solved using DFS / BFS

---

## Reference

Study Plan: https://leetcode.com/studyplan/leetcode-75/  
Problem: LeetCode – Keys and Rooms
