# Day 12 – Container With Most Water

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Arrays, Two Pointers  
**Status:** Completed  

---

## Problem Overview
You are given an integer array `height` where each element represents the height of a vertical line on the x-axis.  
Choose two lines such that, together with the x-axis, they form a container that can hold the **maximum amount of water**.

The task is to return the **maximum water area** that can be contained.

---

## Key Observations
- The area is determined by:
  - The **distance** between two lines
  - The **minimum height** of the two lines
- A brute-force approach checking all pairs is inefficient.
- We can solve this optimally using the **two-pointer technique**.

---

## Approach
Use two pointers:
- One at the **left end**
- One at the **right end**

At each step:
1. Calculate the area formed by the two lines.
2. Update the maximum area if the current one is larger.
3. Move the pointer that has the **smaller height**, because increasing the width while keeping a small height cannot increase the area.

This strategy guarantees finding the optimal solution in linear time.

---

## Algorithm Summary
1. Initialize two pointers at both ends of the array.
2. Compute the area between them.
3. Update the maximum area if needed.
4. Move the pointer pointing to the smaller height.
5. Repeat until the pointers meet.

---

## Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Key Learnings
- Applying two-pointer techniques to optimization problems
- Understanding how to reduce a quadratic problem to linear time
- Making smart decisions based on mathematical observations
- Designing efficient algorithms with constant extra space

---

## Reference
- Study Plan: https://leetcode.com/studyplan/leetcode-75/  
- Problem Platform: LeetCode
