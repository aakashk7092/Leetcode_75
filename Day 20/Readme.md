# Day 20 – Find the Difference of Two Arrays

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Easy  
**Topics:** Arrays, Hash Set  
**Status:** Completed  

---

## Problem Overview
You are given two integer arrays `nums1` and `nums2`.  

Your task is to return a list containing:
- All **distinct elements in `nums1` that are not present in `nums2`**
- All **distinct elements in `nums2` that are not present in `nums1`**

The result should contain **unique values only**, and the order does not matter.

---

## Key Observations
- Duplicate elements inside the same array should be considered only once.
- Checking existence using arrays would be inefficient.
- Using a **set** allows fast lookup and automatic uniqueness.

---

## Approach
Use **hash sets** to store unique elements from both arrays:

1. Insert all elements of `nums1` into a set.
2. Insert all elements of `nums2` into another set.
3. Traverse the first set:
   - If an element is not found in the second set, add it to the first result list.
4. Traverse the second set:
   - If an element is not found in the first set, add it to the second result list.

This guarantees:
- Only unique elements are processed  
- Fast lookup using hashing  

---

## Algorithm Summary
1. Create two hash sets from both input arrays.
2. Compare elements of the first set against the second set.
3. Compare elements of the second set against the first set.
4. Store uncommon elements accordingly.
5. Return the final result.

---

## Complexity Analysis
- **Time Complexity:** `O(n + m)`  
  (`n` = size of `nums1`, `m` = size of `nums2`)
- **Space Complexity:** `O(n + m)` (for hash sets)

---

## Key Learnings
- Using hash sets for fast membership checking
- Removing duplicates automatically with set data structures
- Efficient comparison between two collections
- Writing clean logic for set-difference problems

---

## Reference
- Study Plan: https://leetcode.com/studyplan/leetcode-75/  
- Problem Platform: LeetCode
