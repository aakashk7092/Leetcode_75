# Day 55 – Letter Combinations of a Phone Number

**Study Plan:** LeetCode 75  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Backtracking, Recursion, String  
**Status:** Completed  

---

## Problem Overview

Given a string containing digits from `2-9`, return all possible letter combinations that the number could represent.

The mapping is the same as on a phone keypad:


2 → abc
3 → def
4 → ghi
5 → jkl
6 → mno
7 → pqrs
8 → tuv
9 → wxyz


Return all possible combinations.

---

## Example

Input:

digits = "23"


Output:

["ad","ae","af","bd","be","bf","cd","ce","cf"]


---

## Key Observation

Each digit maps to multiple characters.

If:
- First digit has 3 choices
- Second digit has 3 choices

Total combinations:

3 × 3 = 9


This is a classic **combinatorial generation problem**.

---

## Why Backtracking?

We must:
- Try every possible character
- Move to next digit
- Build combinations step by step
- Undo the choice (backtrack)

This is exactly what backtracking is designed for.

---

## Approach

1. If input is empty → return empty list.
2. Use a recursive function:
   - Base case: if index reaches end → store current combination.
   - Otherwise:
     - Get characters for current digit.
     - Loop through each character.
     - Add character.
     - Recurse to next index.
     - Remove character (backtrack).

---

## Recursion Tree Example

For digits = "23":

         ""
     /    |    \
    a     b     c
  / | \  / | \  / | \
 ad ae af bd be bf cd ce cf

Each level represents a digit.

---

## Algorithm Summary

1. Create digit → letters mapping.
2. Use recursive function.
3. Maintain temporary string.
4. Explore all possible branches.
5. Backtrack after each recursive call.
6. Return result list.

---

## Complexity Analysis

Let:

n = length of digits


Each digit can map to at most 4 letters.

**Time Complexity:**

O(4^n)


**Space Complexity:**

O(n)

(recursion stack depth)

---

## Key Learnings

- Understanding recursion tree structure
- Proper backtracking technique
- Managing temporary state
- Generating combinations efficiently

---

## Pattern Identified

Backtracking  
Combinatorial Generation  
Recursion Tree Exploration  

---

## Interview Insight

This problem tests:
- Can you write clean recursion?
- Do you understand backtracking?
- Can you manage state correctly?

This is a foundational recursion pattern used in:
- Subsets
- Permutations
- Combination Sum
- N-Queens

---

## Reference

Study Plan: LeetCode 75  
Problem: LeetCode – Letter Combinations of a Phone Number
