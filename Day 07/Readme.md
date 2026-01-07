# Day 07 – Product of Array Except Self

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Arrays, Prefix Sum, Suffix Product  
**Status:** Completed  

---

## Problem Overview
You are given an integer array `nums`.  
Your task is to return a new array where each element at index `i` is equal to the **product of all elements in the array except `nums[i]`**.

Constraints:
- Division is **not allowed**.
- The solution must run in **O(n)** time.

---

## Key Observations
- Direct multiplication for every index would be too slow.
- Division cannot be used.
- We can compute results efficiently using:
  - **Prefix products**
  - **Suffix products**

---

## Approach
The solution is based on breaking the product into two parts for each index:

- Product of all elements **to the left**
- Product of all elements **to the right**

Steps:
1. First, compute prefix products for each index.
2. Then, traverse from the end to compute suffix products.
3. Multiply prefix and suffix values to get the final result for each position.

This avoids division and keeps the solution efficient.

---

## Algorithm Summary
1. Initialize a result array with default value `1`.
2. Traverse from left to right to store prefix products.
3. Traverse from right to left to apply suffix products.
4. Store the final product for each index.

---

## Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)` (excluding output array)

---

## Key Learnings
- Using prefix and suffix techniques to avoid nested loops
- Optimizing array-based problems without using division
- Designing space-efficient algorithms
- Applying mathematical thinking to coding problems

---

## Reference
- Study Plan: https://leetcode.com/studyplan/leetcode-75/  
- Problem Platform: LeetCode
