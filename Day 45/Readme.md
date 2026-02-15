# Day 45 – Reorder Routes to Make All Paths Lead to City Zero

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Graph, DFS, Tree, Traversal  
**Status:** Completed  

---

## Problem Overview

You are given `n` cities numbered from `0` to `n-1` and a list of directed roads.

Each road is represented as:
[a, b]
meaning there is a directed road from city `a` to city `b`.

Your task is to find the **minimum number of roads that need to be reversed** so that every city can reach city `0`.

---

## Key Observations

- The cities and roads form a **tree structure** (no cycles).
- We must ensure every node has a path to city `0`.
- Some edges already point toward city `0`, others must be reversed.
- DFS traversal helps explore all paths efficiently.

---

## Core Idea

Convert the graph into an **undirected graph**, but store direction information:

For each original road:
a → b

Store:

a → b (cost = 1) // needs reversal if used toward 0
b → a (cost = 0) // already correct direction

During DFS traversal:
- If we move along an edge with cost = 1  
→ it means reversal is required  
→ increment counter

---

## Graph Visualization Example

Input:

During DFS traversal:
- If we move along an edge with cost = 1  
→ it means reversal is required  
→ increment counter

---

## Graph Visualization Example

Input:
n = 6
connections = [[0,1],[1,3],[2,3],[4,0],[4,5]]

Original directions:
0 → 1
1 → 3
2 → 3
4 → 0
4 → 5


Minimum reversals needed = 3

---

## Approach

1. Build adjacency list with direction markers.
2. Run DFS starting from city `0`.
3. Traverse all connected cities.
4. Count edges that need reversal.
5. Return total count.

---

## Algorithm Summary

1. Convert directed graph into undirected adjacency list with flags.
2. Start DFS from node 0.
3. Track visited nodes using parent tracking.
4. Count edges that require reversal.
5. Return final count.

---

## Complexity Analysis

**Time Complexity:** O(n)  
- Each node visited once  

**Space Complexity:** O(n)  
- Adjacency list  
- Recursion stack  

---

## Key Learnings

- Converting directed graph problems into undirected traversal problems
- Using DFS with parent tracking
- Understanding edge direction handling
- Solving tree-based graph problems efficiently

---

## Pattern Identified

Graph Traversal on Tree  
DFS with Edge Direction Tracking  

---

## Reference

Study Plan: https://leetcode.com/studyplan/leetcode-75/  
Problem: LeetCode – Reorder Routes to Make All Paths Lead to City Zero

