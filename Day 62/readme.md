# Day 62 – Domino and Tromino Tiling

**Study Plan:** LeetCode 75  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Dynamic Programming, Recurrence Relation  
**Status:** Completed  

---

## Problem Overview

You are given a 2 × n board.

You can tile the board using:

- 2 × 1 domino
- L-shaped tromino

Return the number of ways to tile the board completely.

Since the answer may be large, return it modulo 10^9 + 7.

---

## Key Observation

Let:

t[i] = number of ways to tile a 2 × i board

By analyzing patterns, we observe:

t[1] = 1  
t[2] = 2  
t[3] = 5  

For i ≥ 4:

t[i] = 2 × t[i-1] + t[i-3]

---

## Why This Recurrence Works

At width i:

1️⃣ Place a vertical domino  
   → reduces problem to t[i-1]

2️⃣ Place two horizontal dominoes  
   → reduces to t[i-2]

3️⃣ Use tromino placements  
   → introduces dependency on t[i-3]

After simplifying all cases, recurrence becomes:

t[i] = 2*t[i-1] + t[i-3]

---

## Approach (Bottom-Up DP)

1. Handle base cases:
   - n = 1 → 1
   - n = 2 → 2
2. Initialize DP array.
3. Fill using recurrence.
4. Apply modulo at every step.
5. Return t[n].

---

## Example

For n = 4:

t[1] = 1  
t[2] = 2  
t[3] = 5  

t[4] = 2*t[3] + t[1]  
      = 2*5 + 1  
      = 11  

---

## Complexity Analysis

Let:
n = board width

Time Complexity:
O(n)

Space Complexity:
O(n)

(Can be optimized to O(1))

---

## Why Modulo Is Needed

Values grow exponentially.

To avoid overflow:

Use:

mod = 1e9 + 7

Apply modulo at each step.

---

## Pattern Identified

Dynamic Programming  
Advanced Recurrence  
Tiling Problems  

---

## Key Learnings

- Observing pattern in small values
- Deriving recurrence relation
- Applying modulo arithmetic
- Handling exponential growth problems

---

## Interview Insight

This problem tests:

- Can you derive recurrence?
- Can you recognize tiling patterns?
- Can you manage large numbers safely?

Tiling problems are very common in DP interviews.

---

## Reference

Study Plan: LeetCode 75  
Problem: LeetCode – Domino and Tromino Tiling
