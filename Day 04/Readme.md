# Day 04 – Can Place Flowers


::contentReference[oaicite:0]{index=0}


**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Easy  
**Topics:** Arrays, Greedy  
**Status:** Completed  

---

## Problem Overview
You are given an array representing a flowerbed, where:
- `1` means a flower is already planted
- `0` means the plot is empty

You are also given an integer `n`, representing the number of new flowers to plant.

Flowers **cannot be planted in adjacent plots**.  
The task is to determine whether it is possible to plant `n` new flowers without violating this rule.

---

## Key Observation
A flower can be planted at index `i` **only if**:
- The current plot is empty
- The left neighbor (if exists) is empty
- The right neighbor (if exists) is empty

This allows us to make decisions greedily while scanning the array.

---

## Approach
- Traverse the flowerbed from left to right.
- At each position, check whether planting a flower is valid based on neighboring plots.
- If valid, plant a flower and decrement `n`.
- Stop early if `n` becomes zero.

This greedy strategy works because planting as early as possible never reduces future valid placements.

---

## Algorithm Summary
1. Iterate through the flowerbed array.
2. For each index, check left and right neighbors safely.
3. If planting is allowed, place a flower and reduce `n`.
4. Return whether all `n` flowers were planted successfully.

---

## Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Key Learnings
- Applying greedy decisions safely in array traversal
- Handling boundary conditions (first and last index)
- Making optimal local choices for global feasibility

---

## Reference
- Study Plan: https://leetcode.com/studyplan/leetcode-75/
- Problem Platform: LeetCode
