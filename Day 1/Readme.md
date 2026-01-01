# Day 01 – Merge Strings Alternately


::contentReference[oaicite:0]{index=0}


**Study Plan:** LeetCode 75  
**Platform:** LeetCode  
**Difficulty:** Easy  
**Topic:** Strings, Two Pointers  
**Status:** Completed

---

## Problem Overview
Given two strings `word1` and `word2`, merge them by alternating characters starting with `word1`.  
If one string is longer, append the remaining characters at the end.

---

## Approach
- Use two pointers to traverse both strings.
- Append characters alternately while both pointers are valid.
- Append the remaining substring from the longer string.

This approach ensures clarity and handles edge cases cleanly.

---

## Algorithm Steps
1. Initialize two indices for both strings.
2. While both indices are within bounds:
   - Append one character from each string alternately.
3. Append remaining characters from the longer string.
4. Return the merged result.

---

## Complexity Analysis
- **Time Complexity:** `O(n + m)`
- **Space Complexity:** `O(1)` (excluding output string)

---

## Files
Day-01/
├── README.md
└── solution.cpp

---

## Key Learning
- Practical use of the two-pointer technique
- Handling edge cases in string manipulation
- Writing clean and readable C++ logic

---

## Reference
- Study Plan: https://leetcode.com/studyplan/leetcode-75/
- Problem Platform: LeetCode
