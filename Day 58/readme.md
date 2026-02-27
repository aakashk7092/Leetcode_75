# Day 58 – Min Cost Climbing Stairs

**Study Plan:** LeetCode 75  
**Platform:** LeetCode  
**Difficulty:** Easy  
**Topics:** Dynamic Programming, Memoization  
**Status:** Completed  

---

## Problem Overview

You are given an array `cost` where:

- `cost[i]` = cost of stepping on stair `i`

You can:
- Climb 1 step
- Or climb 2 steps

You may start from index `0` or `1`.

Return the **minimum cost to reach the top**.

---

## Example

Input:
cost = [10, 15, 20]

Output:
15

Explanation:
Start at index 1 → Pay 15 → Jump to top.
Key Observation

At every index i, you have two choices:

Move to i + 1

Move to i + 2

So the recurrence becomes:

dp[i] = cost[i] + min(dp[i+1], dp[i+2])

Goal:
Reach beyond last index (top).

Approach – Top Down (Memoization)

Define a recursive function:

Returns minimum cost from index i to top.

Base Case:

If index ≥ size → return 0

Memoize results to avoid recomputation.

Final answer:

min(solve(0), solve(1))

Why Memoization?

Without memoization:

Repeated subproblems

Exponential time complexity

With memoization:

Each index computed once

Linear time complexity

Recursion Visualization

For cost = [10, 15, 20]

solve(0)
  → 10 + min(solve(1), solve(2))
solve(1)
  → 15 + min(solve(2), solve(3))
solve(2)
  → 20 + min(solve(3), solve(4))

But once computed, values are stored.

Complexity Analysis

Let:

n = cost.size()

Time Complexity:

O(n)

Space Complexity:

O(n)

(for memo array + recursion stack)
