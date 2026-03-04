# Day 63 – Unique Paths

**Study Plan:** LeetCode 75  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Dynamic Programming, Recursion, Memoization  
**Status:** Completed  

---

## Problem Overview

You are given a robot located at the top-left corner of an `m × n` grid.

The robot can only move:

- Right
- Down

The goal is to reach the bottom-right corner.

Return the **total number of unique paths** the robot can take.

---

## Key Observation

At any cell `(i, j)`, the robot has two choices:

1️⃣ Move **Right** → `(i, j+1)`  
2️⃣ Move **Down** → `(i+1, j)`

So the total paths from `(i, j)` are:

paths(i,j) = paths(i, j+1) + paths(i+1, j)

---

## Recurrence Relation

Let:

paths(i,j) = number of ways to reach destination from cell `(i,j)`

Then:

paths(i,j) = paths(i+1,j) + paths(i,j+1)

---

## Base Cases

1️⃣ If we go outside the grid:

paths = 0

2️⃣ If we reach the destination `(m-1, n-1)`:

paths = 1

---

## Approach (Top-Down DP / Memoization)

1. Start from `(0,0)`
2. Recursively explore:
   - Right
   - Down
3. Store results in DP table to avoid recomputation.
4. Return total ways.

Memoization prevents solving the same subproblem multiple times.

---

## Example

Input:

m = 3  
n = 2  

Grid:

Start → →  
↓     ↓  
→ → End  

Total paths:

3

---

## Visualization

Grid example:


S → →
↓ ↓
→ → E


Possible paths:

1️⃣ Right → Right → Down  
2️⃣ Right → Down → Right  
3️⃣ Down → Right → Right  

Total = **3 paths**

---

## Complexity Analysis

Let:

m = rows  
n = columns  

Time Complexity:

O(m × n)

Space Complexity:

O(m × n)

(for memoization table)

---

## Pattern Identified

Grid Dynamic Programming  
Path Counting Problems  
Memoization  

---

## Key Learnings

- Converting grid movement into DP states
- Avoiding repeated recursion using memoization
- Breaking complex paths into smaller subproblems
- Understanding 2D DP state transitions

---

## Interview Insight

This problem is a **classic DP grid pattern**.

Variants include:

- Unique Paths II (with obstacles)
- Minimum Path Sum
- Maximum Path Sum in Grid
- Grid DP optimization

Mastering this pattern helps solve many matrix problems.

---

## Reference

Study Plan: LeetCode 75  
Problem: LeetCode – Unique Paths
