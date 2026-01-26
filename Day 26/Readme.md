# Day 26 – Decode String

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Strings, Stack, Recursion  
**Status:** Completed  

---

## Problem Overview
You are given an encoded string `s` that follows the pattern:

Where:
- `k` is a positive integer representing the number of repetitions  
- `encoded_string` is a string that can itself contain nested encodings  

Your task is to return the **fully decoded string**.

Examples:
- `"3[a]2[bc]"` → `"aaabcbc"`  
- `"3[a2[c]]"` → `"accaccacc"`

---

## Key Observations
- Encoded patterns can be **nested**.
- A simple left-to-right scan is not sufficient due to nesting.
- The problem naturally fits:
  - **Stack-based parsing**, or  
  - **Recursive descent parsing**

---

## Approach
Use a **recursive parsing approach**:

- Traverse the string using an index.
- When a digit is found, build the full number representing repetition count.
- When an opening bracket `[` is found:
  - Recursively decode the substring inside the brackets.
  - Append the decoded substring `k` times to the current result.
- When a closing bracket `]` is found:
  - Return the current decoded substring to the caller.
- Normal characters are appended directly to the current result.

This approach handles nested structures cleanly and mirrors the grammar of the encoding.

---

## Algorithm Summary
1. Initialize an index pointer at the start of the string.
2. Traverse characters one by one.
3. Parse numbers to determine repetition counts.
4. On `[`, recursively decode the inner substring.
5. On `]`, return the decoded substring.
6. Continue until the full string is processed.

---

## Complexity Analysis
- **Time Complexity:** `O(n)`  
  (each character is processed once; repeated concatenations depend on output size)
- **Space Complexity:** `O(n)`  
  (due to recursion stack and output string)

---

## Key Learnings
- Using recursion to parse nested structures
- Handling multi-digit repetition counts
- Designing clean recursive helper functions
- Applying stack/recursion patterns for expression decoding

---

## Reference
- Study Plan: https://leetcode.com/studyplan/leetcode-75/  
- Problem Platform: LeetCode
