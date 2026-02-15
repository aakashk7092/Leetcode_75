# Day 46 – Evaluate Division

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Graph, DFS, Weighted Graph  
**Status:** Completed  

---

## Problem Overview

You are given equations like:

a / b = 2.0
b / c = 3.0

And queries like:

a / c = ?
b / a = ?
a / e = ?

Your task is to return the result of each query.  
If the result cannot be determined, return `-1.0`.

---

## Key Observations

- Each equation represents a relationship between two variables.
- This naturally forms a **weighted graph**:
  - Nodes → variables
  - Edges → division relationships
  - Weights → division values

Example:

a → b = 2.0
b → c = 3.0

Graph:

a --2.0--> b --3.0--> c

So:


---

## Graph Representation

For each equation:

u / v = value

Add two edges:

u → v (value)
v → u (1/value)

This allows bidirectional traversal.

---

## Approach

Use **Depth-First Search (DFS)**:

For each query:

1. Start DFS from source variable.
2. Multiply edge weights while traversing.
3. Stop when destination variable is found.
4. Use a visited set to avoid cycles.
5. If destination is reached → return product.
6. If not reachable → return -1.0.

---

## Example

Input:

equations = [["a","b"],["b","c"]]
values = [2.0, 3.0]
queries = [["a","c"],["b","a"],["a","e"]]


Output:

[6.0, 0.5, -1.0]

---

## Algorithm Summary

1. Build weighted adjacency list.
2. For each query:
   - Run DFS
   - Track visited nodes
   - Multiply weights along path
3. Store result.

---

## Complexity Analysis

Let:

V = number of variables
E = number of equations
Q = number of queries

**Time Complexity:** O(Q × (V + E))

**Space Complexity:** O(V + E)

---

## Key Learnings

- Converting equations into graph representation
- Using weighted graph traversal
- Applying DFS with multiplication accumulation
- Avoiding cycles using visited set

---

## Pattern Identified

Weighted Graph Traversal  
DFS with Path Product Accumulation  

---

## Visual Representation

Example Graph:

  2.0
a --------> b
|
| 3.0
↓
c


Query:

a → c
Result = 2.0 × 3.0 = 6.0

---

## Reference

Study Plan: https://leetcode.com/studyplan/leetcode-75/  
Problem: LeetCode – Evaluate Division
