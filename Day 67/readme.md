# Day 67 – Counting Bits

**Study Plan:** LeetCode 75  
**Platform:** LeetCode  
**Difficulty:** Easy  
**Topics:** Dynamic Programming, Bit Manipulation  
**Status:** Completed  

---

## Problem Overview

Given an integer `n`, return an array `result` where:


result[i] = number of 1's in the binary representation of i


For all numbers from:


0 → n


---

## Example

Input:


n = 5


Output:


[0,1,1,2,1,2]


Explanation:

| Number | Binary | Set Bits |
|------|------|------|
| 0 | 000 | 0 |
| 1 | 001 | 1 |
| 2 | 010 | 1 |
| 3 | 011 | 2 |
| 4 | 100 | 1 |
| 5 | 101 | 2 |

---

## Key Observation

When we divide a number by 2:


i / 2


we are essentially **removing the last bit**.

Two cases appear:

### If number is even

Last bit is `0`.


bits(i) = bits(i/2)


---

### If number is odd

Last bit is `1`.


bits(i) = bits(i/2) + 1


---

## Recurrence Relation


dp[i] =
dp[i/2] if i is even
dp[i/2] + 1 if i is odd


---

## Approach (Bottom-Up DP)

1. Create an array `result` of size `n + 1`.
2. Initialize `result[0] = 0`.
3. For every number `i` from `1` to `n`:
   - If `i` is odd → add 1
   - If `i` is even → same as `i/2`
4. Return the result array.

---

## Example Walkthrough

For `n = 5`


result[0] = 0
result[1] = result[0] + 1 = 1
result[2] = result[1] = 1
result[3] = result[1] + 1 = 2
result[4] = result[2] = 1
result[5] = result[2] + 1 = 2


Final result:


[0,1,1,2,1,2]


---

## Complexity Analysis

Let:


n = input number


Time Complexity:


O(n)


Space Complexity:


O(n)


---

## Pattern Identified

Dynamic Programming  
Bit Manipulation  
State Transition DP  

---

## Key Learnings

- Observing binary patterns
- Using previously computed results
- Reducing repeated bit counting
- Understanding bit properties with division

---

## Interview Insight

A brute force approach would count bits for every number individually:


O(n log n)


Using DP reduces it to:


O(n)


This type of **pattern recognition in binary numbers** is very common in coding interviews.

---

## Reference

Study Plan: LeetCode 75  
Problem: LeetCode – Counting Bits
