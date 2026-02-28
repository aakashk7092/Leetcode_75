# Day 59 – House Robber

**Study Plan:** LeetCode 75  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Dynamic Programming  
**Status:** Completed  

---

## 🏠 Problem Overview

You are given an integer array `nums` where:

- `nums[i]` represents money in the i-th house.
- You cannot rob two adjacent houses.

Your goal is to return the **maximum amount of money** you can rob without alerting the police.

---

## 🔎 Key Insight

At every house, you have two choices:

1️⃣ **Rob this house**
- Add current money.
- Skip previous house.

2️⃣ **Skip this house**
- Take the maximum till previous house.

This gives the recurrence:


dp[i] = max(
nums[i-1] + dp[i-2], // rob current
dp[i-1] // skip current
)


---

## 🧠 Approach (Bottom-Up DP)

Define:

- `dp[i]` = maximum money that can be robbed from first `i` houses.

Base cases:


dp[0] = 0
dp[1] = nums[0]


Build answer iteratively using the recurrence.

Final answer:


dp[n]


---

## 📊 Example

Input:

nums = [2,7,9,3,1]


DP Table:

| House | Money | Max Till Now |
|--------|--------|--------------|
| 1 | 2 | 2 |
| 2 | 7 | 7 |
| 3 | 9 | 11 |
| 4 | 3 | 11 |
| 5 | 1 | 12 |

Final Answer:

12


---

## ⏱ Complexity Analysis

Let `n = nums.size()`.

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

---

## 🚀 Optimization Insight

We only ever use:
- `dp[i-1]`
- `dp[i-2]`

So space can be optimized to:


O(1)


Using just two variables.

---

## 📌 Pattern Identified

Dynamic Programming  
Rob-or-Skip Pattern  
Non-Adjacent Maximum Sum  

---

## 💡 Key Learning

- Converting decision-making into recurrence
- Building DP table iteratively
- Recognizing standard DP patterns used in interviews
