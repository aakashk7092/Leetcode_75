# Day 02 – Kids With the Greatest Number of Candies


::contentReference[oaicite:0]{index=0}


**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Easy  
**Topics:** Arrays, Greedy  
**Status:** Completed  

---

## Problem Overview
You are given an integer array representing the number of candies each child has and an integer representing extra candies.  
For each child, determine whether giving all the extra candies would make that child have the greatest number of candies among all children.

The result is a boolean array indicating which children can reach the maximum.

---

## Approach
- Identify the maximum number of candies currently held by any child.
- For each child, compare their candies plus extra candies with the maximum.
- Mark the result as `true` if the condition is satisfied; otherwise, `false`.

Each child is evaluated independently, making this a straightforward greedy approach.

---

## Algorithm Summary
1. Find the maximum value in the array.
2. Iterate through each element and compare after adding extra candies.
3. Record the result for each position.
4. Return the boolean result array.

---

## Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(n)` (for the result array)

---

## Key Learnings
- Efficient use of maximum value comparisons
- Applying greedy logic in array-based problems
- Writing clean, readable problem-solving logic

---

## Reference
- Study Plan: https://leetcode.com/studyplan/leetcode-75/
- Problem Platform: LeetCode
