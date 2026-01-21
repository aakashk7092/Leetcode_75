# Day 21 – Unique Number of Occurrences

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Easy  
**Topics:** Arrays, Hash Map, Hash Set  
**Status:** Completed  

---

## Problem Overview
You are given an integer array `arr`.  

Your task is to determine whether the **number of occurrences of each value is unique**.

In other words:
- Count how many times each number appears.
- Check if all these counts are **distinct**.

Return `true` if all frequencies are unique, otherwise return `false`.

---

## Key Observations
- We need to track two things:
  - Frequency of each number
  - Whether any two numbers share the same frequency
- Direct comparison of all pairs of counts would be inefficient.
- Hash-based data structures are ideal for this problem.

---

## Approach
Use two data structures:

1. A **hash map** to count the frequency of each number.
2. A **hash set** to store the frequencies seen so far.

Steps:
- First, count the frequency of every number using the hash map.
- Then, iterate over the map:
  - For each frequency, check if it already exists in the set.
  - If it does, frequencies are not unique → return `false`.
  - Otherwise, insert the frequency into the set and continue.

If all frequencies are unique, return `true`.

---

## Algorithm Summary
1. Create a hash map to store element frequencies.
2. Traverse the array and update counts.
3. Create an empty hash set.
4. Traverse the frequency map:
   - If a frequency already exists in the set, return `false`.
   - Otherwise, insert it into the set.
5. If no duplicates are found, return `true`.

---

## Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(n)` (for hash map and hash set)

---

## Key Learnings
- Combining hash map and hash set for validation problems
- Detecting duplicates in derived data (frequencies)
- Efficient counting and uniqueness checking
- Writing clean logic for frequency-based problems

---

## Reference
- Study Plan: https://leetcode.com/studyplan/leetcode-75/  
- Problem Platform: LeetCode
