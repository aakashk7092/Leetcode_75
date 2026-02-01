# Day 32 – Maximum Twin Sum of a Linked List

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Linked List, Two Pointers, Array  
**Status:** Completed  

---

## Problem Overview
You are given the head of a **linked list with even length**.

Each node has a **twin**:
- The first node is paired with the last
- The second node with the second last
- And so on…

The **twin sum** is defined as the sum of a node and its twin.

Your task is to find the **maximum twin sum** among all pairs.

---

## Key Observations
- The linked list length is always even.
- Direct access to the last node is not possible in a singly linked list.
- Converting the linked list into an array allows easy access from both ends.

---

## Approach
Use an **auxiliary array approach**:

1. Traverse the linked list and store all node values in an array.
2. Use two pointers:
   - One starting from the beginning
   - One starting from the end
3. Compute the sum of values at both pointers.
4. Track the maximum sum while moving pointers toward the center.

This simplifies the twin pairing logic and keeps the solution easy to understand.

---

## Algorithm Summary
1. Traverse the linked list and store values in an array.
2. Initialize two pointers at the start and end of the array.
3. Compute twin sums for corresponding pairs.
4. Track and return the maximum twin sum.

---

## Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(n)` (extra array used)

---

## Key Learnings
- Transforming linked list problems using arrays
- Using two pointers on arrays for symmetric pairing
- Understanding trade-offs between space and simplicity
- Writing clean and readable solutions for linked list problems

---

## Reference
- Study Plan: https://leetcode.com/studyplan/leetcode-75/  
- Problem Platform: LeetCode
