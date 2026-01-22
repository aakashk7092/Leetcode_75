# Day 22 – Determine if Two Strings Are Close

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Strings, Hashing, Sorting  
**Status:** Completed  

---

## Problem Overview
You are given two strings `word1` and `word2`.  

Two strings are considered **close** if:
1. They contain the **same set of characters**, and  
2. The **multiset of character frequencies** can be made equal by rearranging frequencies.

Your task is to determine whether the two strings are close.

---

## Key Observations
- The order of characters does not matter.
- Both strings must:
  - Contain exactly the **same characters**  
  - Have the **same frequency distribution**, possibly in different order  
- If one string contains a character that the other does not, they cannot be close.

---

## Approach
Use **frequency counting and sorting**:

1. Count the frequency of each character in both strings.
2. Check that both strings contain the **same set of characters**:
   - For every character, either both frequencies are zero or both are non-zero.
3. Sort both frequency arrays.
4. Compare the sorted frequency arrays:
   - If they are equal, the strings are close.
   - Otherwise, they are not.

This checks both the character set condition and the frequency distribution condition.

---

## Algorithm Summary
1. If lengths differ, return `false`.
2. Build frequency arrays for both strings.
3. Verify both strings use the same characters.
4. Sort both frequency arrays.
5. Compare the sorted arrays and return the result.

---

## Complexity Analysis
- **Time Complexity:** `O(n + 26 log 26)` ≈ `O(n)`  
  (`n` = length of the strings)
- **Space Complexity:** `O(1)` (fixed-size frequency arrays)

---

## Key Learnings
- Separating **character presence** from **frequency distribution**
- Using sorting to compare multisets
- Applying hashing concepts to string equivalence problems
- Writing clean logic for non-trivial string comparison

---

## Reference
- Study Plan: https://leetcode.com/studyplan/leetcode-75/  
- Problem Platform: LeetCode
