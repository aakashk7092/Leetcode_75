# Day 50 – Successful Pairs of Spells and Potions

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Array, Binary Search, Sorting  
**Status:** Completed  

---

## Problem Overview

You are given:

- An array `spells`
- An array `potions`
- A target value `success`

A pair `(spell, potion)` is considered successful if:

spell * potion >= success


For each spell, you must return the number of potions that form a successful pair.

---

## Key Observations

- Brute force approach would check all pairs → O(n × m)
- Too slow for large inputs
- If potions are sorted, we can use **Binary Search**
- For each spell, find the minimum potion required

---

## Core Idea

For a given spell:

spell × potion ≥ success


Rearranging:

potion ≥ ceil(success / spell)


So the problem becomes:

- Find first potion ≥ required value
- Count remaining elements

---

## Approach

1. Sort the `potions` array.
2. For each spell:
   - Calculate minimum required potion value.
   - Use `lower_bound` to find first valid potion.
   - Count how many potions are valid.
3. Store result.

This reduces time complexity significantly.

---

## Example

Input:

spells = [5,1,3]
potions = [1,2,3,4,5]
success = 7


For spell = 5:
5 × potion ≥ 7
potion ≥ 2
Valid potions: [2,3,4,5]
Count = 4


Final Output:
[4,0,3]


---

## Algorithm Summary

1. Sort potions.
2. For each spell:
   - Compute minimum required potion.
   - Apply binary search.
   - Count valid potions.
3. Return result array.

---

## Complexity Analysis

Let:

n = spells.size()
m = potions.size()


**Time Complexity:**

Sorting → O(m log m)  
Binary search for each spell → O(n log m)

Total:
O(m log m + n log m)


**Space Complexity:** O(1) (excluding output)

---

## Why Binary Search Works

Since potions are sorted:

[1, 2, 3, 4, 5]


Once we find first valid potion,
all elements to the right are automatically valid.

---

## Key Learnings

- Transforming multiplication condition into division inequality
- Using binary search for efficient counting
- Combining sorting + search optimization
- Avoiding brute force solutions

---

## Pattern Identified

Sorting + Binary Search  
Mathematical Condition Transformation  

---

## Reference

Study Plan: https://leetcode.com/studyplan/leetcode-75/  
Problem: LeetCode – Successful Pairs of Spells and Potions
