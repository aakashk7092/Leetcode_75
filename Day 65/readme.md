# Day 65 – Best Time to Buy and Sell Stock with Transaction Fee

**Study Plan:** LeetCode 75  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Dynamic Programming, Memoization, State Machine  
**Status:** Completed  

---

## Problem Overview

You are given an array `prices` where:

- `prices[i]` represents the stock price on day `i`.

You can perform multiple transactions (buy → sell), but:

- You must sell the stock before buying again.
- Each transaction includes a **transaction fee**.

Return the **maximum profit** you can achieve.

---

## Key Observation

At any day, we have two possible states:

1️⃣ **Buy state**  
We are allowed to buy a stock.

2️⃣ **Sell state**  
We already hold a stock and can sell it.

So each decision depends on the **current day** and whether we **can buy or must sell**.

---

## State Definition

Let:


dp[day][buy]


Where:

- `day` → current day
- `buy` → whether we can buy (1) or must sell (0)

---

## Recurrence Relation

### If we can **buy**

Two choices:

1. Buy stock  
2. Skip buying  


profit = max(
-prices[day] + dp[day+1][0],
dp[day+1][1]
)


---

### If we must **sell**

Two choices:

1. Sell stock  
2. Skip selling  


profit = max(
prices[day] - fee + dp[day+1][1],
dp[day+1][0]
)


---

## Base Case

If:


day >= n


No days left → profit = **0**

---

## Approach (Top-Down DP / Memoization)

1. Start from day `0` with **buy allowed**.
2. At each day decide whether to **buy/sell/skip**.
3. Store results in DP table to avoid recomputation.
4. Return maximum profit.

---

## Example

Input:


prices = [1,3,2,8,4,9]
fee = 2


Optimal transactions:

Buy → 1  
Sell → 8  

Buy → 4  
Sell → 9  

Total Profit:


8


---

## Complexity Analysis

Let:


n = prices.size()


Time Complexity:


O(n)


Each state is computed once.

Space Complexity:


O(n)


For memoization table.

---

## Pattern Identified

Dynamic Programming  
State Machine DP  
Stock Buy/Sell Pattern  

---

## Key Learnings

- Modeling problems using **states**
- Avoiding repeated computation using memoization
- Understanding stock trading DP patterns
- Handling transaction fees correctly

---

## Interview Insight

This problem is part of the **stock DP family**:

- Best Time to Buy and Sell Stock
- Buy and Sell Stock II
- Buy and Sell Stock III
- Buy and Sell Stock with Cooldown
- Buy and Sell Stock with Fee

Mastering the state machine pattern makes all these problems easier.

---

## Reference

Study Plan: LeetCode 75  
Problem: Best Time to Buy and Sell Stock with Transaction Fee
