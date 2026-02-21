# Day 52 – Total Cost to Hire K Workers

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Greedy, Heap (Priority Queue), Two Pointers  
**Status:** Completed  

---

## Problem Overview

You are given:

- An integer array `costs`
- An integer `k`
- An integer `candidates`

You must hire exactly `k` workers.

Hiring rule:
- At each step, you can choose from the first `candidates` workers (from left)
- Or from the last `candidates` workers (from right)
- Always hire the worker with the minimum cost
- If tie → prefer left side

Return the **total minimum cost** to hire `k` workers.

---

## Key Observations

- We are always choosing the minimum cost from two dynamic windows.
- After hiring, windows shift inward.
- We must efficiently track smallest element from both ends.
- A heap is ideal for repeatedly extracting minimum.

---

## Core Idea

Use **two min-heaps**:

- `pq1` → left side candidates
- `pq2` → right side candidates

Maintain two pointers:
- `i` → start pointer
- `j` → end pointer

At each hiring step:
1. Fill both heaps up to `candidates` size.
2. Compare top elements.
3. Hire the cheaper one.
4. Update total cost.
5. Repeat until k workers hired.

---

## Why Two Heaps?

Because:

- We need fast access to minimum on both sides.
- We must dynamically adjust candidate windows.
- Heap gives O(log n) insertion and removal.

---

## Example

Input:


costs = [17,12,10,2,7,2,11,20,8]
k = 3
candidates = 4


Process:

- Compare smallest from left and right windows.
- Hire cheapest each time.
- Continue until 3 hires completed.

Output:

11


---

## Algorithm Summary

1. Initialize two pointers (i, j).
2. Initialize two min-heaps.
3. While hired < k:
   - Fill left heap
   - Fill right heap
   - Compare tops
   - Add smaller to result
4. Return total cost.

---

## Complexity Analysis

Let:


n = costs.size()


Each element is pushed and popped at most once.

**Time Complexity:**  
O(n log candidates)

**Space Complexity:**  
O(candidates)

---

## Why This Works

- We always maintain valid candidate windows.
- We always choose global minimum among available candidates.
- Greedy strategy guarantees minimum total cost.

---

## Key Learnings

- Using two heaps simultaneously
- Managing sliding windows with pointers
- Applying greedy decision making
- Efficient hiring simulation logic

---

## Pattern Identified

Greedy + Two Heaps  
Sliding Window + Min Heap  

---

## Reference

Study Plan: https://leetcode.com/studyplan/leetcode-75/  
Problem: LeetCode – Total Cost to Hire K Workers
