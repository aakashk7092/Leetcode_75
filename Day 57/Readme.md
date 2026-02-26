# Day 57 – N-th Tribonacci Number

**Study Plan:** LeetCode 75  
**Platform:** LeetCode  
**Difficulty:** Easy  
**Topics:** Dynamic Programming, Iteration  
**Status:** Completed  

---

## Problem Overview

The Tribonacci sequence is defined as:

T0 = 0  
T1 = 1  
T2 = 1  

For n ≥ 3:

Tn = Tn-1 + Tn-2 + Tn-3  

Given an integer `n`, return the value of Tn.

---

## Example

Input:

n = 4


Output:

4


Explanation:

T0 = 0
T1 = 1
T2 = 1
T3 = 2
T4 = 4


---

## Key Observation

Each number depends on the **previous three numbers**.

This is similar to Fibonacci, but instead of 2 previous states,
we use 3 previous states.

---

## Approach

Instead of recursion (which would be exponential),
use an **iterative dynamic programming approach**.

Maintain three variables:

- a → Tn-3
- b → Tn-2
- c → Tn-1

At each step:

next = a + b + c


Then shift:

a = b
b = c
c = next


Repeat until reaching `n`.

---

## Why This Is Optimal

We only need the last 3 values at any time.

So instead of storing an array of size `n`,
we optimize space to constant memory.

---

## Complexity Analysis

Let:

n = input value


Time Complexity:

O(n)


Space Complexity:

O(1)


---

## Why Not Recursion?

Recursive solution:
- Time: O(3^n)
- Very slow due to repeated computations

Iterative DP:
- Time: O(n)
- Efficient and optimal

---

## Pattern Identified

Dynamic Programming  
State Compression  
Fibonacci Variant  

---

## Key Learnings

- Recognizing recurrence relations
- Optimizing space using rolling variables
- Avoiding exponential recursion
- Understanding DP state transitions

---

## Interview Insight

When interviewer sees Fibonacci-like recurrence,
immediately think:

1. Can we use DP?
2. Can we optimize space?

This is classic state compression.

---

## Reference

Study Plan: LeetCode 75  
Problem: LeetCode – N-th Tribonacci Number
