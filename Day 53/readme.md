# Day 53 – Find Peak Element

**Study Plan:** LeetCode 75  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Binary Search, Array  
**Status:** Completed  

---

## Problem Overview

A peak element is an element that is **strictly greater than its neighbors**.

Given an array `nums`, return the index of **any peak element**.

Rules:
- `nums[-1] = -∞`
- `nums[n] = -∞`
- There is always at least one peak.

---

## Example

Input:

nums = [1,2,3,1]


Output:

2


Because:

3 > 2 and 3 > 1


---

# Approach 1 – Brute Force

### Idea

Traverse the array and find the first position where:


nums[i] > nums[i+1]


That position must be a peak.

### Why It Works

If the sequence keeps increasing,
the last element will automatically be a peak
because the right boundary is treated as `-∞`.

### Complexity

- Time: O(n)
- Space: O(1)

---

# Approach 2 – Binary Search (Optimal)

### Key Observation

If:


nums[mid] > nums[mid+1]


Then:
- A peak exists on the **left side (including mid)**.

Else:
- A peak exists on the **right side**.

Why?

Because the slope determines direction toward a peak.

---

### Binary Search Logic

1. Compare `nums[mid]` with `nums[mid+1]`.
2. If descending → move left.
3. If ascending → move right.
4. Continue until `i == j`.
5. That index is a peak.

---

## Why Binary Search Works

The array behaves like a mountain range:

- If slope is increasing → peak must be right.
- If slope is decreasing → peak must be left.

This guarantees logarithmic search.

---

## Complexity Analysis

### Brute Force
- Time: O(n)

### Binary Search
- Time: O(log n)
- Space: O(1)

---

## Key Learnings

- Binary search is not only for sorted arrays.
- It works on monotonic behavior.
- Understanding slope-based decisions is powerful.
- Always look for directional guarantees.

---

## Pattern Identified

Binary Search on Answer  
Monotonic Slope Analysis  

---

## Interview Insight

If interviewer asks:
“Can you do better than O(n)?”

You must say:
“Yes, using Binary Search in O(log n).”

That’s the real interview move.

---

## Reference

Study Plan: LeetCode 75  
Problem: LeetCode – Find Peak Element
