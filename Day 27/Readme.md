# Day 27 – Number of Recent Calls

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Easy  
**Topics:** Queue, Sliding Window, Two Pointers  
**Status:** Completed  

---

## Problem Overview
You are asked to design a class `RecentCounter` that counts the number of recent requests within a fixed time window.

The class supports a function `ping(t)` which:
- Receives a new request at time `t` (in milliseconds)
- Returns the number of requests that occurred in the **last 3000 milliseconds**, inclusive of `t`

In other words, count all requests with time in the range:
[t - 3000, t]

---

## Key Observations
- The input times are given in **strictly increasing order**.
- Older requests outside the 3000 ms window are no longer relevant.
- We only need to maintain requests that fall within the current window.

This naturally fits a **queue / sliding window** model.

---

## Approach
Use a **sliding window with two pointers**:

- Maintain a list (or queue) of all request times.
- Keep a pointer (`left`) to track the first valid time within the window.
- On each `ping(t)`:
  - Add the new time `t` to the list.
  - Move the `left` pointer forward while times are **less than `t - 3000`**.
  - The number of recent calls is the size of the list minus `left`.

This ensures efficient removal of outdated requests without deleting elements explicitly.

---

## Algorithm Summary
1. Initialize an empty list to store request times and a pointer to track the window start.
2. For each new `ping(t)`:
   - Append `t` to the list.
   - Advance the pointer to skip times older than `t - 3000`.
3. Return the number of elements inside the valid window.

---

## Complexity Analysis
- **Time Complexity:** `O(1)` amortized per `ping`  
  (each time value is processed at most once)
- **Space Complexity:** `O(n)` (for storing recent request times)

---

## Key Learnings
- Applying sliding window technique in real-time stream problems
- Using two pointers to manage dynamic time windows
- Designing efficient data structures for online queries
- Avoiding unnecessary deletions by using pointer movement

---

## Reference
- Study Plan: https://leetcode.com/studyplan/leetcode-75/  
- Problem Platform: LeetCode
