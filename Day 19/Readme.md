# Day 19 – Find Pivot Index

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Easy  
**Topics:** Arrays, Prefix Sum  
**Status:** Completed  

---

## Problem Overview
You are given an integer array `nums`.  
Your task is to find the **pivot index** such that:

- The sum of all elements to the **left** of the index is equal to  
- The sum of all elements to the **right** of the index  

If no such index exists, return `-1`.  
If multiple pivot indices exist, return the **leftmost one**.

---

## Key Observations
- Recomputing left and right sums for every index would be inefficient.
- The total sum of the array can be calculated once.
- At each index, the right sum can be derived from the total sum and left sum.

---

## Approach
Use the **prefix sum technique**:

1. First, compute the **total sum** of the array.
2. Initialize a variable to track the **left sum**.
3. Traverse the array:
   - Compute the right sum as:  
     `total sum - left sum - current element`
   - If left sum equals right sum, return the current index.
   - Otherwise, add the current element to the left sum and continue.

This approach ensures an optimal solution in a single pass.

---

## Algorithm Summary
1. Calculate the total sum of the array.
2. Initialize left sum as `0`.
3. Traverse the array from left to right.
4. At each index, compare left sum and right sum.
5. Return the first index where they are equal.
6. If no index satisfies the condition, return `-1`.

---

## Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Key Learnings
- Efficient use of prefix sums for balance problems
- Reducing repeated calculations with running totals
- Handling edge cases (pivot at start or end)
- Writing clean logic for index-based array problems

---

## Reference
- Study Plan: https://leetcode.com/studyplan/leetcode-75/  
- Problem Platform: LeetCode
