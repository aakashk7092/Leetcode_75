# Day 15 – Maximum Number of Vowels in a Substring of Given Length

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Strings, Sliding Window  
**Status:** Completed  

---

## Problem Overview
You are given a string `s` and an integer `k`.  
Your task is to find the **maximum number of vowels** present in any substring of length `k`.

Vowels are defined as:  
`a, e, i, o, u`.

---

## Key Observations
- Checking every substring of length `k` individually would be inefficient.
- When moving from one substring to the next, only two characters change:
  - One character **enters** the window  
  - One character **leaves** the window  
- This makes the problem ideal for the **sliding window technique**.

---

## Approach
Use a **sliding window** of size `k`:

1. Maintain a count of vowels in the current window.
2. As you iterate through the string:
   - Add `1` to the count if the new character is a vowel.
   - Subtract `1` if the character leaving the window is a vowel.
3. After each update, compare the current count with the maximum found so far.

This avoids recomputing vowel counts for every substring and keeps the solution efficient.

---

## Algorithm Summary
1. Initialize counters for the current vowel count and maximum vowels.
2. Traverse the string from left to right.
3. Update the count as the window slides.
4. Track the maximum vowel count encountered.
5. Return the maximum value.

---

## Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Key Learnings
- Applying sliding window technique to string problems
- Efficiently updating counts instead of recomputing
- Writing clean helper logic for character classification
- Designing optimal solutions for substring-based problems

---

## Reference
- Study Plan: https://leetcode.com/studyplan/leetcode-75/  
- Problem Platform: LeetCode
