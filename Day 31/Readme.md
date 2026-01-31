# Day 31 – Reverse Linked List

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Easy  
**Topics:** Linked List, Iteration, Pointers  
**Status:** Completed  

---

## Problem Overview
You are given the head of a singly linked list.  
Your task is to **reverse the linked list** and return the new head.

Reversing means changing the direction of all `next` pointers so that the list is traversed from the last node to the first.

---

## Key Observations
- Linked lists cannot be reversed by swapping values efficiently.
- The reversal must be done by **changing pointers**.
- An iterative approach allows reversal in a single pass using constant extra space.

---

## Approach
Use an **iterative pointer manipulation strategy**:

- Maintain three pointers:
  - `prev` → the previous node (initially `NULL`)
  - `curr` → the current node
  - `nextNode` → temporarily stores the next node
- At each step:
  - Save the next node
  - Reverse the `next` pointer of the current node
  - Move pointers one step forward
- Continue until the end of the list is reached.

At the end, the `prev` pointer becomes the new head.

---

## Algorithm Summary
1. Handle edge cases (empty list or single node).
2. Initialize pointers for traversal.
3. Iterate through the list:
   - Reverse the current node’s pointer.
   - Move all pointers forward.
4. Return the new head of the reversed list.

---

## Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)` (in-place reversal)

---

## Key Learnings
- Mastering pointer manipulation in linked lists
- Understanding in-place transformations
- Writing safe and efficient iterative solutions
- Building a strong foundation for advanced linked list problems

---

## Reference
- Study Plan: https://leetcode.com/studyplan/leetcode-75/  
- Problem Platform: LeetCode
