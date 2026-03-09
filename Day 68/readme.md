# Day 68 – Single Number

**Study Plan:** LeetCode 75  
**Platform:** LeetCode  
**Difficulty:** Easy  
**Topics:** Bit Manipulation, XOR  
**Status:** Completed  

---

## Problem Overview

You are given a **non-empty array of integers** where:

- Every element appears **twice**
- Only **one element appears once**

Your task is to find the **single element that appears only once**.

---

## Example

Input:

nums = [4,1,2,1,2]

Output:

4

Explanation:

All numbers appear twice except **4**.

---

## Key Observation

XOR has very important properties:


a ^ a = 0
a ^ 0 = a


Also XOR is **commutative and associative**:


a ^ b ^ a = (a ^ a) ^ b = b


So when we XOR all numbers together:

- Duplicate numbers cancel out
- Only the unique number remains

---

## Approach

1. Initialize a variable `ans = 0`.
2. Traverse the array.
3. XOR each element with `ans`.
4. Duplicates cancel out automatically.
5. The remaining value is the unique number.

---

## Example Walkthrough

nums = [4,1,2,1,2]


ans = 0

ans = 0 ^ 4 = 4
ans = 4 ^ 1 = 5
ans = 5 ^ 2 = 7
ans = 7 ^ 1 = 6
ans = 6 ^ 2 = 4


Final Answer:


4


---

## Complexity Analysis

Let:


n = nums.size()


Time Complexity:


O(n)


Space Complexity:


O(1)


No extra space required.

---

## Pattern Identified

Bit Manipulation  
XOR Pattern  
Duplicate Cancellation Technique  

---

## Key Learnings

- Understanding XOR properties
- Eliminating duplicates using bit operations
- Solving problems with constant space

---

## Interview Insight

This problem teaches an important trick:

Using XOR to **cancel duplicate elements**.

This pattern is also used in:

- Single Number II
- Missing Number
- Find the Duplicate Number
- XOR based puzzles

Mastering XOR problems helps in many **bit manipulation interview questions**.

---

## Reference

Study Plan: LeetCode 75  
Problem: LeetCode – Single Number
