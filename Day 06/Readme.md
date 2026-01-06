# Day 06 – Move Zeroes

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Easy  
**Topics:** Arrays, Two Pointers  
**Status:** Completed  

---

## Problem Overview
Given an integer array, move all `0`s to the end of the array while maintaining the relative order of the non-zero elements.  
The operation must be performed **in-place** without making a copy of the array.

---

## Key Observation
- The relative order of non-zero elements must remain unchanged.
- Only the positions of zero elements are modified.
- This is a classic use case for the **two-pointer technique**.

---

## Approach
- Use one pointer to track the position where the next non-zero element should be placed.
- Traverse the array with another pointer.
- Whenever a non-zero element is found, move it to the tracked position and advance the pointer.
- After processing all elements, the remaining positions automatically contain zeros.

This ensures minimal operations and preserves order.

---

## Algorithm Summary
1. Initialize an index to mark the position for the next non-zero element.
2. Traverse the array from left to right.
3. Place each non-zero element at the tracked position.
4. Continue until the end of the array is reached.

---

## Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Key Learnings
- Practical use of two-pointer technique
- Maintaining order while performing in-place updates
- Writing efficient logic without extra memory

---

## Reference
- Study Plan: https://leetcode.com/studyplan/leetcode-75/
- Problem Platform: LeetCode
