# Day 61 – Successful Pairs of Spells and Potions

**Study Plan:** LeetCode 75  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Binary Search, Sorting  
**Status:** Completed  

---

## Problem Overview

You are given:

- An array `spells`
- An array `potions`
- A target value `success`

A pair `(spell, potion)` is considered successful if:

spell × potion ≥ success

For each spell, return how many potions form a successful pair.

---

## Key Observation

For a fixed spell:

spell × potion ≥ success

Rearranging:

potion ≥ ceil(success / spell)

So for every spell, we need to count how many potions are **greater than or equal to** a minimum required value.

---

## Why Sorting + Binary Search?

If we sort `potions`, then:

- All valid potions will lie on the right side.
- We can use `lower_bound` to find the first valid potion.
- Count = total potions − index found.

This avoids checking all pairs (which would be O(n × m)).

---

## Approach

1. Sort the `potions` array.
2. For each spell:
   - Compute minimum required potion:
     
     minPotion = ceil(success / spell)
     
   - If minPotion > largest potion → answer is 0.
   - Otherwise:
     - Use binary search (`lower_bound`) to find first valid index.
     - Count remaining potions.
3. Store result.

---

## Example

Input:
spells = [5,1,3]  
potions = [1,2,3,4,5]  
success = 7  

For spell = 5:
5 × potion ≥ 7  
potion ≥ 2  

Valid potions = [2,3,4,5]  
Count = 4  

Final Output:
[4,0,3]

---

## Complexity Analysis

Let:
n = spells.size()  
m = potions.size()  

Sorting:
O(m log m)

Binary search for each spell:
O(n log m)

Total:
O(m log m + n log m)

Space Complexity:
O(1) (excluding output)

---

## Why This Works

Since the potions array is sorted:

Once we find the first valid potion,
all elements to the right automatically satisfy the condition.

This makes counting efficient.

---

## Pattern Identified

Sorting + Binary Search  
Search on Condition  
Mathematical Transformation  

---

## Key Learnings

- Transforming multiplication constraint into division inequality
- Using lower_bound effectively
- Reducing brute force using sorting
- Combining math with binary search

---

## Interview Insight

When you see:

- Condition like a × b ≥ target
- Need to count valid pairs

Think:

Can I rearrange the equation?
Can I sort one array?
Can I binary search?

This pattern appears frequently in interviews.
