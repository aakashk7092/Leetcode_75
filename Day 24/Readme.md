# Day 24 – Removing Stars From a String

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Strings, Stack, Simulation  
**Status:** Completed  

---

## Problem Overview
You are given a string `s` that contains lowercase letters and the character `'*'`.  

Each `'*'` represents an operation that removes:
- The `'*'` itself  
- The **closest non-star character to its left**

Your task is to return the final string after **processing all stars**.

---

## Key Observations
- Every `'*'` deletes the character just before it.
- The operations must be processed **from left to right**.
- This behavior matches exactly how a **stack** works:
  - Push characters
  - Pop when a star is encountered

---

## Approach
Use a **stack-like approach with a string**:

- Traverse the string from left to right.
- For each character:
  - If it is a normal letter, append it to the result.
  - If it is `'*'`, remove the **last added character** from the result.
- After processing all characters, the result string is the final answer.

This avoids using an explicit stack and keeps the solution simple and efficient.

---

## Algorithm Summary
1. Initialize an empty result string.
2. Traverse each character in the input string.
3. If the character is not `'*'`, append it to the result.
4. If the character is `'*'`, remove the last character from the result.
5. Return the final result string.

---

## Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(n)` (for the result string)

---

## Key Learnings
- Using strings as implicit stacks for simulation problems
- Processing removal operations in correct order
- Avoiding extra data structures when not necessary
- Writing clean logic for character stream processing

---

## Reference
- Study Plan: https://leetcode.com/studyplan/leetcode-75/  
- Problem Platform: LeetCode
