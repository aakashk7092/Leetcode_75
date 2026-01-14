# Day 14 – Maximum Average Subarray I

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Easy  
**Topics:** Arrays, Sliding Window  
**Status:** Completed  

---

## Problem Overview
You are given an integer array `nums` and an integer `k`.  
Your task is to find the **maximum average value** of any contiguous subarray of length `k`.

The result should be returned as a floating-point number.

---

## Key Observations
- A brute-force approach checking every subarray of length `k` is inefficient.
- The sum of consecutive subarrays differs only by:
  - Removing one element  
  - Adding one new element  
- This makes the problem ideal for the **sliding window technique**.

---

## Approach
Use a **sliding window** of size `k`:

1. First, compute the sum of the first `k` elements.
2. Then, slide the window one step at a time:
   - Add the next element to the sum.
   - Remove the element that goes out of the window.
3. After each slide, compute the average and update the maximum value.

This avoids recomputing sums from scratch and keeps the solution efficient.

---

## Algorithm Summary
1. Calculate the sum of the first `k` elements.
2. Store the average as the initial maximum.
3. Move the window forward one step at a time.
4. Update the sum and compute the new average.
5. Track and return the maximum average found.

---

## Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Key Learnings
- Efficient use of the sliding window technique
- Avoiding repeated calculations with incremental updates
- Handling floating-point results carefully
- Writing optimized solutions for subarray problems

---

## Reference
- Study Plan: https://leetcode.com/studyplan/leetcode-75/  
- Problem Platform: LeetCode
