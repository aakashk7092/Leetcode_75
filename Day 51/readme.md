# Day 51 – Maximum Subsequence Score

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Greedy, Sorting, Heap (Priority Queue)  
**Status:** Completed  

---

## Problem Overview

You are given:

- Two integer arrays `nums1` and `nums2`
- An integer `k`

You must choose exactly `k` indices such that the score is maximized.

The score is defined as:


(sum of selected nums1 elements) × (minimum of selected nums2 elements)


Return the maximum possible score.

---

## Key Observations

- The minimum value in selected `nums2` determines the multiplier.
- If we fix a value from `nums2` as the minimum,
  we should maximize the sum of `k` values from `nums1`.
- Sorting by `nums2` helps control the minimum element.

---

## Core Idea

1. Pair elements:


(nums1[i], nums2[i])


2. Sort pairs in descending order of `nums2`.

Why?

Because while iterating:
- The current `nums2` value will act as the minimum multiplier.
- We only need to maximize sum of `k` nums1 values.

---

## Approach

1. Combine both arrays into pairs.
2. Sort pairs in descending order of `nums2`.
3. Use a **min heap** to maintain top `k` values from `nums1`.
4. Maintain running sum of selected `nums1`.
5. For each position:
   - Update heap and sum.
   - Calculate score = sum × current nums2.
   - Track maximum result.

---

## Why Min Heap?

We must keep exactly `k` elements with maximum possible sum.

Min heap helps:
- Remove smallest nums1 when size exceeds k.
- Maintain largest k elements efficiently.

---

## Example

Input:


nums1 = [1,3,3,2]
nums2 = [2,1,3,4]
k = 3


After pairing and sorting by nums2:


(2,4), (3,3), (1,2), (3,1)


Selecting best 3 gives maximum score.

Output:

12


---

## Algorithm Summary

1. Create pair vector.
2. Sort by nums2 descending.
3. Initialize min heap.
4. Track sum of k largest nums1.
5. Update result during iteration.
6. Return maximum score.

---

## Complexity Analysis

Let:


n = size of arrays


Sorting → O(n log n)  
Heap operations → O(n log k)

Total:

O(n log n)


Space:

O(n)


---

## Why This Works

Since nums2 is sorted descending:

At each step:
- Current nums2 is smallest in chosen subset.
- We just need best possible k-sum from nums1.

Greedy + Heap guarantees optimal solution.

---

## Key Learnings

- Combining sorting with heap
- Greedy decision making
- Managing fixed-size subsets efficiently
- Optimizing product-based scoring problems

---

## Pattern Identified

Sorting + Greedy + Min Heap  
Top-K Optimization  

---

## Reference

Study Plan: https://leetcode.com/studyplan/leetcode-75/  
Problem: LeetCode – Maximum Subsequence Score
