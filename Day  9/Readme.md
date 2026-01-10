# Day 09 – String Compression

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Strings, Two Pointers  
**Status:** Completed  

---

## Problem Overview
You are given an array of characters.  
Your task is to compress it **in-place** by replacing consecutive repeating characters with:

- The character itself  
- Followed by the count of repetitions (if greater than 1)

The function should return the **new length** of the compressed array.

---

## Key Observations
- Compression must be done **without using extra space**.
- Counts greater than `9` must be written as **separate digits**.
- The original order of characters must remain unchanged.
- Efficient index management is critical to avoid overwriting data incorrectly.

---

## Approach
This problem is solved using a **two-pointer technique**:

- One pointer scans the array to count consecutive characters.
- Another pointer writes the compressed result back into the same array.

For each group of repeated characters:
1. Count how many times the character appears.
2. Write the character once.
3. If the count is greater than one, write each digit of the count.
4. Move to the next group.

This guarantees in-place compression in a single pass.

---

## Algorithm Summary
1. Initialize a write index at the start of the array.
2. Traverse the array and count consecutive identical characters.
3. Write the character at the write index.
4. If needed, write the digits of the count.
5. Resize the array to the new compressed length.

---

## Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)` (compression done in-place)

---

## Key Learnings
- Effective use of two pointers for in-place operations
- Handling multi-digit numbers during compression
- Maintaining correctness while modifying an array during traversal
- Writing efficient and memory-optimized solutions

---

## Reference
- Study Plan: https://leetcode.com/studyplan/leetcode-75/  
- Problem Platform: LeetCode
