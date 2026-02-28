Day 59 – House Robber

**Study Plan:** LeetCode 75  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Dynamic Programming  
**Status:** Completed  

---

## Problem Overview

You are given an array `nums` where:

- `nums[i]` represents the amount of money in the i-th house.
- You cannot rob two adjacent houses.

Return the **maximum amount of money** you can rob without triggering the alarm.

---

## Key Observation

At each house, you have two decisions:

1. **Rob this house**
   - Add current money.
   - Skip the previous house.

2. **Skip this house**
   - Take the maximum till previous house.

This creates a clear recurrence relation.

---

## Recurrence Relation

If we define:


dp[i] = maximum money that can be robbed from first i houses


Then:


dp[i] = max(
nums[i-1] + dp[i-2], // rob current house
dp[i-1] // skip current house
)


---

## Approach (Bottom-Up DP)

1. Create a DP array of size `n + 1`.
2. Initialize base cases:
   - dp[0] = 0
   - dp[1] = nums[0]
3. Fill the DP table using recurrence.
4. Return dp[n].

---

## DP Transition Explanation

For each index:

- `steal = nums[i-1] + dp[i-2]`
- `skip = dp[i-1]`
- Take maximum of both.

This ensures we never rob adjacent houses.

---

## Example

Input:

nums = [2,7,9,3,1]


DP progression:


dp[0] = 0
dp[1] = 2
dp[2] = 7
dp[3] = 11
dp[4] = 11
dp[5] = 12


Final Answer:

12


---

## Why This Works

The problem has:

- Overlapping subproblems
- Optimal substructure

Which makes it a perfect Dynamic Programming problem.

---

## Complexity Analysis

Let:

n = nums.size()


Time Complexity:

O(n)


Space Complexity:

O(n)


(Optimizable to O(1))

---

## Space Optimization Insight

Since we only need:

- dp[i-1]
- dp[i-2]

We can use two variables instead of a full array.

---

## Pattern Identified

Dynamic Programming  
Rob-or-Skip Pattern  
Non-Adjacent Maximum Sum  

---

## Key Learnings

- Designing recurrence relation
- Building bottom-up DP solution
- Identifying decision-based DP problems
- Optimizing space in linear DP

---

## Interview Insight

This is one of the most important DP patterns.

Mastering this helps solve:

- House Robber II
- Delete and Earn
- Maximum Sum of Non-Adjacent Elements
- Circular DP problems
