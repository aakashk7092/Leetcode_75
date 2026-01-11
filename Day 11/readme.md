# Day 11 – Is Subsequence

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Easy  
**Topics:** Strings, Two Pointers  
**Status:** Completed  

---

## Problem Overview
You are given two strings `s` and `t`.  
Your task is to determine whether `s` is a **subsequence** of `t`.

A subsequence means that all characters of `s` appear in `t` **in the same order**, but not necessarily consecutively.

---

## Key Observations
- The relative order of characters must be preserved.
- Characters do not need to be adjacent.
- This problem can be solved efficiently without modifying either string.

---

## Approach
Use a **two-pointer technique**:

- One pointer iterates over string `s`.
- Another pointer iterates over string `t`.

While traversing `t`, whenever a matching character from `s` is found, move the pointer of `s` forward.  
If all characters of `s` are matched before `t` ends, then `s` is a subsequence of `t`.

This approach ensures a single pass through both strings.

---

## Algorithm Summary
1. Initialize two pointers for `s` and `t`.
2. Traverse `t` from left to right.
3. When characters match, move the pointer of `s`.
4. Continue until either string ends.
5. If all characters of `s` are matched, return `true`; otherwise, return `false`.

---

## Complexity Analysis
- **Time Complexity:** `O(n + m)`  
  (`n` = length of `s`, `m` = length of `t`)
- **Space Complexity:** `O(1)`

---

## Key Learnings
- Applying two-pointer technique to string matching problems
- Understanding the concept of subsequences vs substrings
- Writing efficient solutions without extra memory

---

## Reference
- Study Plan: https://leetcode.com/studyplan/leetcode-75/  
- Problem Platform: LeetCode
