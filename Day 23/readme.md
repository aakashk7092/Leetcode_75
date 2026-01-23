# Day 23 – Equal Row and Column Pairs

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Matrices, Hashing, Simulation  
**Status:** Completed  

---

## Problem Overview
You are given an `n x n` integer matrix `grid`.  

Your task is to count the number of pairs `(i, j)` such that:
- The **i-th row** is exactly equal to  
- The **j-th column**

Return the total number of such equal row–column pairs.

---

## Key Observations
- Direct comparison of every row with every column is possible but needs careful handling.
- A column can be treated as a vector, similar to a row.
- Transposing the matrix allows columns to be compared easily with rows.

---

## Approach
Use **matrix transposition** to simplify comparison:

1. Create a new matrix that represents the **transpose** of the original grid.
   - Rows become columns, and columns become rows.
2. For every row in the original matrix:
   - Compare it with every row in the transposed matrix (which represents a column of the original).
3. Count how many times a row exactly matches a column.

This converts the row–column comparison problem into a row–row comparison problem.

---

## Algorithm Summary
1. Create a transposed version of the matrix.
2. Initialize a counter for valid pairs.
3. For each row in the original matrix:
   - Compare it with each row in the transposed matrix.
   - If they are equal, increment the counter.
4. Return the final count.

---

## Complexity Analysis
- **Time Complexity:** `O(n^3)`  
  (comparing `n` rows with `n` columns, each of length `n`)
- **Space Complexity:** `O(n^2)` (for the transposed matrix)

---

## Key Learnings
- Using matrix transpose to simplify 2D problems
- Converting column operations into row operations
- Performing structured comparisons in 2D arrays
- Writing clean logic for matrix-based matching problems

---

## Reference
- Study Plan: https://leetcode.com/studyplan/leetcode-75/  
- Problem Platform: LeetCode
