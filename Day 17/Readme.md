# Day 17 – Longest Subarray of 1’s After Deleting One Element

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Arrays, Sliding Window, Two Pointers  
**Status:** Completed  

---

## Problem Overview
You are given a binary array `nums`.  
You must delete **exactly one element** from the array.

Your task is to return the **length of the longest subarray containing only `1`s** after deleting one element.

---

## Key Observations
- You are allowed to remove **only one element**.
- Removing one `0` can potentially connect two blocks of `1`s.
- If the array contains only `1`s, you still must delete one element.
- The problem can be solved efficiently using a dynamic window.

---

## Approach
Use a **sliding window / two-pointer approach** that allows **at most one zero** inside the window:

- Traverse the array using a right pointer.
- Track the index of the most recent zero.
- When a new zero is encountered, move the left pointer just past the previous zero.
- At each step, calculate the window size excluding the deleted element.

This ensures the window always represents a valid subarray after deleting one element.

---

## Algorithm Summary
1. Initialize two pointers for the window.
2. Keep track of the index of the last seen zero.
3. Expand the window to the right.
4. Adjust the left boundary when more than one zero is encountered.
5. Update the maximum valid subarray length.

---

## Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Key Learnings
- Handling constraints where **exactly one deletion** is required
- Using pointers to dynamically adjust window boundaries
- Solving binary array problems with optimal efficiency
- Applying sliding window logic beyond fixed-size windows

---

## Reference
- Study Plan: https://leetcode.com/studyplan/leetcode-75/  
- Problem Platform: LeetCode
