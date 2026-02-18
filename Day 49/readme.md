# Day 49 – Kth Largest Element in an Array

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Array, Quickselect, Divide and Conquer  
**Status:** Completed  

---

## Problem Overview

You are given an integer array `nums` and an integer `k`.

Your task is to return the **kth largest element** in the array.

Important:
- This is the kth largest element in sorted order.
- Not the kth distinct element.

Example:

Input:
nums = [3,2,1,5,6,4], k = 2

Output:
5

---

## Key Observations

- Sorting the array would work but takes O(n log n) time.
- We need a faster approach.
- Quickselect allows finding kth element in average O(n) time.

---

## Quickselect Concept

Quickselect is based on QuickSort partition logic.

Partition divides array into:

Left side → elements greater than pivot
Pivot → correct position
Right side → elements smaller than pivot

After partition:

- If pivot index == k-1 → answer found
- If pivot index > k-1 → search left
- If pivot index < k-1 → search right

---

## Approach

1. Select a pivot element.
2. Partition the array.
3. Check pivot position.
4. Narrow search space accordingly.
5. Repeat until kth position is found.

This avoids sorting the entire array.

---

## Visual Example

nums = [3,2,1,5,6,4]
k = 2

Step 1:
Pivot = 3

Partition:
[6,5,4] 3 [2,1]

Pivot index = 3

Search left side:
[6,5,4]

Step 2:
Pivot = 6

Partition:
[6] [5,4]

Pivot index = 0

Search right side:
[5,4]

Answer = 5

---

## Algorithm Summary

1. Initialize search boundaries.
2. Apply partition algorithm.
3. Compare pivot index with k-1.
4. Adjust search range.
5. Return kth largest element.

---

## Complexity Analysis

Average Case:

**Time Complexity:** O(n)

Worst Case:

**Time Complexity:** O(n²)

**Space Complexity:** O(1)

---

## Why Quickselect is Efficient

Sorting → O(n log n)  
Quickselect → O(n)

Quickselect only processes required part of array.

---

## Key Learnings

- Partition-based selection algorithm
- Efficient element selection without sorting
- Divide and conquer optimization
- Understanding Quickselect vs QuickSort

---

## Pattern Identified

Quickselect  
Partition Algorithm  
Divide and Conquer  

---

## Reference

Study Plan: https://leetcode.com/studyplan/leetcode-75/  
Problem: LeetCode – Kth Largest Element in an Array
