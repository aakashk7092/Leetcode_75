# Day 01 – Greatest Common Divisor of Strings


::contentReference[oaicite:0]{index=0}


**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Easy  
**Topics:** Strings, Math  
**Status:** Completed  

---

## Problem Overview
Given two strings `str1` and `str2`, return the largest string `x` such that both `str1` and `str2` are made by repeating `x` multiple times.  
If no such string exists, return an empty string.

---

## Key Observation
If a valid GCD string exists:
- `str1 + str2` must be equal to `str2 + str1`
- The length of the answer is the **GCD of the lengths** of both strings

---

## Approach
1. Check if concatenating the strings in different orders produces the same result.
2. If not equal, no common divisor string exists.
3. Compute `gcd(len(str1), len(str2))`.
4. Return the substring of length `gcd` from `str1`.

This approach avoids unnecessary string checks and is optimal.

---

## Complexity Analysis
- **Time Complexity:** `O(n + m)`
- **Space Complexity:** `O(1)` (excluding output)

---
