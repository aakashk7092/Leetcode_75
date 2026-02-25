# Day 56 – Combination Sum III

**Study Plan:** LeetCode 75  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Backtracking, Recursion, Combinations  
**Status:** Completed  

---

## Problem Overview

Find all possible combinations of `k` numbers that:

- Add up to `n`
- Use numbers from `1` to `9`
- Each number is used at most once

Return all valid combinations.

---

## Example

Input:

k = 3
n = 7


Output:

[[1,2,4]]


---

## Key Constraints

- Only numbers from `1` to `9`
- Exactly `k` numbers
- No repetition
- Sum must equal `n`

---

## Core Idea

This is a **restricted combination generation problem**.

We must:
- Choose numbers in increasing order
- Stop when:
  - Sum exceeds target
  - More than k numbers selected
  - Target becomes zero with exactly k numbers

This is a classic **Backtracking with Pruning** problem.

---

## Why Backtracking?

Because:
- We must explore all possible subsets
- But stop early when invalid

Backtracking allows:
- Build partial solution
- Recurse deeper
- Undo last choice

---

## Approach

1. Start from number `1`.
2. Maintain:
   - Current combination
   - Remaining target
3. Base case:
   - If target == 0 and size == k → store result
4. Pruning:
   - If target < 0 → stop
   - If size > k → stop
5. Loop from current number to 9
6. Add number
7. Recurse with next start = i + 1
8. Backtrack

---

## Recursion Tree Example

For k = 3, n = 7:


Start at 1
|
+-- 1
|
+-- 2
|
+-- 4 → Valid


Only one valid combination:

[1,2,4]


---

## Algorithm Summary

1. Call recursive function with start = 1.
2. Maintain temporary list.
3. Stop when:
   - target == 0 AND size == k
4. Use pruning to avoid unnecessary exploration.
5. Return result list.

---

## Complexity Analysis

Maximum numbers: 9  
We are choosing combinations of size k.

Worst-case:

O(C(9, k))


Upper bound:

O(2^9)


Space:

O(k)

(recursion depth)

---

## Why Pruning Matters

Condition:

if(i > target) break;


Prevents exploring impossible branches.

This reduces time significantly.

---

## Key Learnings

- Backtracking with strict constraints
- Efficient pruning strategy
- Combination generation without repetition
- Controlling recursion depth carefully

---

## Pattern Identified

Backtracking + Pruning  
Fixed Size Combination Generation  

---

## Interview Insight

This problem tests:

- Can you manage combination generation?
- Can you prune early?
- Do you understand recursive state control?

This is foundation for:
- Subsets
- Permutations
- Combination Sum I / II
- N-Queens

---

## Reference

Study Plan: LeetCode 75  
Problem: LeetCode – Combination Sum III
