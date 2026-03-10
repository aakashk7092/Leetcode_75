# Day 69 – Minimum Flips to Make a OR b Equal to c

**Study Plan:** LeetCode 75  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Bit Manipulation  
**Status:** Completed  

---

## Problem Overview

You are given three integers:


a, b, c


You can flip any bit of `a` or `b`.

Goal:

Make the following condition true:


(a OR b) == c


Return the **minimum number of flips required**.

---

## Key Observation

We compare the bits of:


(a | b) and c


If a bit differs, we need to flip bits in `a` or `b`.

---

## Bit Logic

First compute:


rst = (a | b) ^ c


This identifies all bit positions where `(a | b)` differs from `c`.

Each differing bit requires **at least one flip**.

---

### Special Case

When both bits of `a` and `b` are `1`, but `c` is `0`.

Example:


a = 1
b = 1
c = 0


Then we must flip **both bits**, not just one.

To detect this case:


rst1 = a & b
rst2 = rst & rst1


These positions require **two flips instead of one**.

---

## Final Answer


popcount(rst) + popcount(rst2)


Where:


popcount(x)


counts the number of set bits.

---

## Example

Input:


a = 2
b = 6
c = 5


Binary:


a = 010
b = 110
c = 101


Minimum flips required:


3


---

## Complexity Analysis

Time Complexity:


O(1)


Only fixed bit operations.

Space Complexity:


O(1)


No extra memory required.

---

## Pattern Identified

Bit Manipulation  
Bitwise Logic Problems  
XOR Difference Detection  

---

## Key Learnings

- Using XOR to detect mismatched bits
- Using AND to detect overlapping bits
- Counting set bits with `__builtin_popcount`
- Efficient bit-level manipulation

---

## Interview Insight

Bit manipulation problems often rely on:

- XOR for differences
- AND for overlapping bits
- OR for merging bits

Understanding these operations helps solve many **low-level optimization problems**.

---

## Reference

Study Plan: LeetCode 75  
Problem: Minimum Flips to Make a OR b Equal to c
