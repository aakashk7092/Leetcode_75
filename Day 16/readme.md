# Day 16 – Max Consecutive Ones III

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Arrays, Sliding Window  
**Status:** Completed  

---

## Problem Overview
You are given a binary array `nums` and an integer `k`.  
You can flip at most `k` zeros to ones.

Your task is to find the **maximum number of consecutive 1s** in the array after performing at most `k` flips.

---

## Key Observations
- A brute-force approach checking all subarrays would be inefficient.
- We need a way to maintain a valid window where:
  - The number of zeros inside the window is at most `k`.
- This problem fits perfectly with the **sliding window technique**.

---

## Approach
Use a **sliding window** with two pointers:

- Expand the window by moving the right pointer.
- Keep track of how many zeros are inside the window.
- If the number of zeros exceeds `k`, shrink the window from the left until it becomes valid again.
- Track the maximum window size during the process.

This ensures that at any time, the window represents a valid subarray where at most `k` zeros are flipped.

---

## Algorithm Summary
1. Initialize two pointers (`left` and `right`) and a counter for zeros.
2. Move the right pointer forward to expand the window.
3. If zero count exceeds `k`, move the left pointer forward to shrink the window.
4. Update the maximum window length at each step.
5. Return the maximum length found.

---

## Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Key Learnings
- Using sliding window to maintain constraints dynamically
- Efficient handling of window resizing
- Applying two-pointer techniques for optimal subarray problems
- Writing clean and scalable solutions for array-based challenges

---

## Reference
- Study Plan: https://leetcode.com/studyplan/leetcode-75/  
- Problem Platform: LeetCode
