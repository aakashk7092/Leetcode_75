# Day 13 – Max Number of K-Sum Pairs

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Arrays, Two Pointers  
**Status:** Completed  

---

## Problem Overview
You are given an integer array `nums` and an integer `k`.  
Your task is to find the **maximum number of operations** you can perform such that:

- In each operation, you pick **two numbers** from the array  
- Their sum is equal to `k`  
- After picking them, both numbers are removed from the array  

The goal is to maximize the total number of such operations.

---

## Key Observations
- Each number can be used **only once**.
- The order of elements does not matter.
- A greedy strategy can be applied after sorting the array.

---

## Approach
Use the **two-pointer technique** after sorting the array:

- Place one pointer at the **start** of the array.
- Place another pointer at the **end** of the array.
- At each step:
  - If the sum of both elements equals `k`, count one valid pair and move both pointers.
  - If the sum is less than `k`, move the left pointer forward to increase the sum.
  - If the sum is greater than `k`, move the right pointer backward to decrease the sum.

This approach ensures that each element is used at most once and finds the maximum number of valid pairs.

---

## Algorithm Summary
1. Sort the array.
2. Initialize two pointers: left and right.
3. While left < right:
   - Check the sum of elements at both pointers.
   - Adjust pointers based on the comparison with `k`.
4. Count every valid pair found.
5. Return the total count.

---

## Complexity Analysis
- **Time Complexity:** `O(n log n)` (due to sorting)
- **Space Complexity:** `O(1)` (excluding sorting overhead)

---

## Key Learnings
- Applying greedy strategies after sorting
- Efficient use of two-pointer technique for pairing problems
- Maximizing operations while ensuring elements are not reused
- Writing clean and optimized logic for array problems

---

## Reference
- Study Plan: https://leetcode.com/studyplan/leetcode-75/  
- Problem Platform: LeetCode
