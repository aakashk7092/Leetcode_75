# Day 06 – Reverse Words in a String

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Strings, Two Pointers  
**Status:** Completed  

---

## Problem Overview
You are given a string `s` consisting of words separated by spaces.  
Your task is to **reverse the order of the words** in the string.

The final string must:
- Not contain leading or trailing spaces  
- Have exactly one space between words  
- Keep the characters of each word unchanged  

---

## Key Observations
- Extra spaces must be removed before processing.
- Only the **order of words** changes, not the words themselves.
- A clean output format is as important as the correct logic.

---

## Approach
- First, remove unnecessary spaces from the string.
- Identify all words in the correct order.
- Reverse the sequence of words.
- Join them back using a single space.

This ensures both correctness and proper formatting.

---

## Algorithm Summary
1. Trim leading and trailing spaces.
2. Split the string into words.
3. Reverse the list of words.
4. Join the words with one space.
5. Return the formatted result.

---

## Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(n)` (for storing words)

---

## Key Learnings
- Handling whitespace correctly in string problems
- Separating formatting logic from core logic
- Writing robust and clean string manipulation solutions

---

## Reference
- Study Plan: https://leetcode.com/studyplan/leetcode-75/  
- Problem Platform: LeetCode
