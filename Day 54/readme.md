# Day 54 – Koko Eating Bananas

**Study Plan:** LeetCode 75  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Binary Search, Search on Answer  
**Status:** Completed  

---

## Problem Overview

Koko loves bananas 🍌.

You are given:
- An array `piles` where each element represents number of bananas in a pile.
- An integer `h` representing total hours available.

Koko can decide an eating speed `k` (bananas per hour).

Goal:
Find the **minimum eating speed `k`** such that Koko can finish all bananas within `h` hours.

---

## Example

Input:

piles = [3,6,7,11]
h = 8


Output:

4


---

## Key Observation

If Koko eats at speed `k`:

For each pile:

hours = ceil(pile / k)


Total hours:

sum(ceil(pile / k))


We must ensure:

total_hours ≤ h


---

# Why Binary Search?

We are searching for:


minimum k


Possible speed range:

1 ≤ k ≤ max(piles)


This is a monotonic condition:

- If speed `k` works → any speed > k will also work.
- If speed `k` doesn’t work → any speed < k won’t work.

This makes it perfect for **Binary Search on Answer**.

---

## Approach

1. Set:
   - `l = 1`
   - `r = max(piles)`
2. While `l < r`:
   - Compute `mid`
   - Check if Koko can finish at speed `mid`
3. If yes:
   - Try smaller speed → `r = mid`
4. Else:
   - Increase speed → `l = mid + 1`
5. Return `l`

---

## Monotonic Behavior

Speed ↑ → Hours ↓

So the graph looks like:


Invalid speeds → Valid speeds


We find the first valid speed.

---

## Complexity Analysis

Let:

n = number of piles
m = max(piles)


Binary Search → O(log m)  
Each check → O(n)

Total:

O(n log m)


Space:

O(1)


---

## Key Learnings

- Binary Search on Answer technique
- Monotonic condition detection
- Efficient ceil calculation using division
- Avoiding brute force speed checking

---

## Pattern Identified

Binary Search on Answer  
Monotonic Feasibility Check  

---

## Interview Insight

This problem tests:
- Can you identify monotonic behavior?
- Can you apply binary search on search space?
- Can you optimize brute force?

This is a classic FAANG-level binary search problem.

---

## Reference

Study Plan: LeetCode 75  
Problem: LeetCode – Koko Eating Bananas
