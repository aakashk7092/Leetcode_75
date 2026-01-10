# Day 05 – Reverse Vowels of a String


::contentReference[oaicite:0]{index=0}


**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Easy  
**Topics:** Strings, Two Pointers  
**Status:** Completed  

---

## Problem Overview
Given a string `s`, reverse only the vowels of the string and return the resulting string.  
All non-vowel characters must remain in their original positions.

Vowels are: `a, e, i, o, u` (both lowercase and uppercase).

---

## Key Observation
- Only vowels are affected; consonants stay in place.
- Swapping vowels from both ends is optimal and avoids unnecessary operations.

---

## Approach
- Use two pointers: one starting from the beginning and one from the end of the string.
- Move each pointer until it points to a vowel.
- Swap the vowels and move both pointers inward.
- Continue until the pointers cross.

This method ensures minimal swaps and linear traversal.

---

## Algorithm Summary
1. Initialize two pointers at the start and end of the string.
2. Move the left pointer until a vowel is found.
3. Move the right pointer until a vowel is found.
4. Swap the vowels.
5. Repeat until both pointers meet.

---

## Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Key Learnings
- Efficient use of the two-pointer technique
- Handling character classification (vowels vs consonants)
- Writing clean logic for in-place string manipulation

---

## Reference
- Study Plan: https://leetcode.com/studyplan/leetcode-75/
- Problem Platform: LeetCode
