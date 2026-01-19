# Day 18 – Find the Highest Altitude

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Easy  
**Topics:** Arrays, Prefix Sum  
**Status:** Completed  

---

## Problem Overview
You are given an integer array `gain`, where each element represents the net gain or loss in altitude between two consecutive points on a trip.

You start the journey at altitude `0`.  
Your task is to find the **highest altitude** reached at any point during the trip.

---

## Key Observations
- The altitude at any point depends on the **sum of all previous gains**.
- The problem is essentially about tracking a **running total**.
- The highest altitude can be found by keeping track of the maximum prefix sum.

---

## Approach
Use the **prefix sum technique**:

- Start with an initial altitude of `0`.
- Iterate through the `gain` array and keep adding each value to the current altitude.
- After each update, compare the current altitude with the maximum altitude seen so far.
- Return the maximum altitude.

This approach ensures a single pass through the array.

---

## Algorithm Summary
1. Initialize current altitude to `0`.
2. Initialize maximum altitude to `0`.
3. Traverse the `gain` array:
   - Update the current altitude.
   - Update the maximum altitude if needed.
4. Return the maximum altitude reached.

---

## Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Key Learnings
- Applying prefix sum technique to cumulative problems
- Tracking maximum values during traversal
- Solving array problems with simple and efficient logic
- Understanding how running totals represent real-world scenarios

---

## Reference
- Study Plan: https://leetcode.com/studyplan/leetcode-75/  
- Problem Platform: LeetCode
