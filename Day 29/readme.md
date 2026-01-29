# Day 29 – Delete the Middle Node of a Linked List

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Linked List, Two Pointers  
**Status:** Completed  

---

## Problem Overview
You are given the head of a singly linked list.

Your task is to **delete the middle node** and return the modified list.

Rules:
- If the list has an even number of nodes, delete the **second middle** node.
- If the list has only one node, return `NULL`.

---

## Key Observations
- Finding the middle efficiently requires **one traversal**.
- The classic **slow and fast pointer** technique is ideal.
- Additional traversal is needed to reconnect the list after deletion.

---

## Approach
Use the **two-pointer technique**:

- Move one pointer (`slow`) one step at a time.
- Move another pointer (`fast`) two steps at a time.
- When `fast` reaches the end, `slow` points to the middle node.
- Traverse again to find the node just before the middle.
- Update links to remove the middle node.

This avoids calculating the length explicitly.

---

## Algorithm Summary
1. Handle edge cases (empty list or single node).
2. Use slow and fast pointers to locate the middle.
3. Traverse to the node before the middle.
4. Adjust pointers to skip the middle node.
5. Return the updated head.

---

## Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)` (no extra memory used)

---

## Key Learnings
- Applying slow–fast pointer technique on linked lists
- Handling edge cases in pointer-based structures
- Deleting nodes without extra memory
- Writing safe pointer manipulation logic

---

## Reference
- Study Plan: https://leetcode.com/studyplan/leetcode-75/  
- Problem Platform: LeetCode
