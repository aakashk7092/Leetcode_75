# Day 10 – Move Zeroes

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Easy  
**Topics:** Arrays, Two Pointers  
**Status:** Completed  

---

## Problem Overview
You are given an integer array `nums`.  
Your task is to move all `0`s to the **end of the array** while maintaining the **relative order of non-zero elements**.

The operation must be performed **in-place**, without using extra space for another array.

---

## Key Observations
- The order of non-zero elements must not change.
- Only the positions of zero elements should be modified.
- A single-pass solution is possible using pointer manipulation.

---

## Approach
This problem can be solved efficiently using a **two-pointer strategy**:

- One pointer is used to locate the first zero in the array.
- The second pointer scans ahead to find non-zero elements.
- Whenever a non-zero element is found after a zero, swap it into the zero’s position.
- Continue this process until the end of the array.

This ensures that all non-zero elements shift forward and all zeros move to the end.

---

## Algorithm Summary
1. Identify the position of the first zero.
2. Traverse the remaining array.
3. Whenever a non-zero element is found, swap it with the element at the zero position.
4. Move the zero pointer forward.
5. Continue until the array is fully processed.

---

## Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)` (in-place modification)

---

## Key Learnings
- Applying two-pointer techniques for in-place array rearrangement
- Preserving order while modifying arrays
- Writing efficient logic without extra memory usage

---

## Reference
- Study Plan: https://leetcode.com/studyplan/leetcode-75/  
- Problem Platform: LeetCode
