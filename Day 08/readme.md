# Day 08 – Increasing Triplet Subsequence

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Arrays, Greedy  
**Status:** Completed  

---

## Problem Overview
Given an integer array `nums`, determine whether there exists a **strictly increasing subsequence of length 3**.

In other words, check if there are indices `i < j < k` such that:
nums[i] < nums[j] < nums[k]

Return `true` if such a triplet exists, otherwise return `false`.

---

## Key Observations
- A brute-force solution with three nested loops is inefficient.
- We do not need to store the entire subsequence.
- Tracking only the **smallest possible candidates** for the first two elements is sufficient.

---

## Approach
Use a **greedy strategy** by maintaining two variables:

- `first` → the smallest value seen so far  
- `second` → the smallest value greater than `first`

As you traverse the array:
- Update `first` when you find a smaller value.
- Update `second` when you find a value greater than `first` but smaller than `second`.
- If you find a value greater than both `first` and `second`, an increasing triplet exists.

This method ensures a single pass with constant extra space.

---

## Algorithm Summary
1. Initialize two variables to represent the first and second elements of a potential triplet.
2. Traverse the array from left to right.
3. Update the variables based on the current value.
4. If a third value greater than both is found, return `true`.
5. If the loop ends, return `false`.

---

## Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Key Learnings
- Applying greedy logic to subsequence problems
- Reducing a multi-loop problem to a single pass
- Using minimal state to detect patterns efficiently

---

## Reference
- Study Plan: https://leetcode.com/studyplan/leetcode-75/  
- Problem Platform: LeetCode
