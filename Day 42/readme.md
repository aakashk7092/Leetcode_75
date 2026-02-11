# Day 42 – Delete Node in a BST

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Binary Search Tree, DFS, Recursion  
**Status:** Completed  

---

## Problem Overview
You are given the root of a **Binary Search Tree (BST)** and an integer `key`.

Your task is to delete the node with value equal to `key` and return the updated BST.

The tree must maintain all **BST properties** after deletion.

---

## Key Observations
Binary Search Tree property:
- Left subtree contains values less than the node
- Right subtree contains values greater than the node

There are **three deletion cases**:

1. Node has no children → simply remove it  
2. Node has one child → replace it with its child  
3. Node has two children → replace it with its inorder successor  

---

## Approach

### Step 1: Locate the Node
Use BST property:
- If key < current node → go left
- If key > current node → go right
- Otherwise, node is found

### Step 2: Handle Deletion Cases

Case 1: No children  
→ Remove the node directly  

Case 2: One child  
→ Replace node with its child  

Case 3: Two children  
→ Find inorder successor (smallest node in right subtree)  
→ Replace current node value with successor value  
→ Delete successor node recursively  

This maintains BST ordering correctly.

---

## Algorithm Summary
1. Traverse the BST to find the node.
2. Handle deletion based on number of children.
3. Use inorder successor when necessary.
4. Return the updated tree.

---

## Complexity Analysis

- **Time Complexity:** `O(h)`  
  (`h` = height of BST)

- **Space Complexity:** `O(h)`  
  (recursive stack space)

Worst case: `O(n)`  
Best case (balanced BST): `O(log n)`

---

## Key Learnings

- Understanding BST deletion cases clearly
- Using inorder successor to maintain structure
- Applying recursion on tree modification problems
- Maintaining BST invariants after operations

---

## Visual Understanding

Deletion cases:

Case 1:
5
/
3

Delete 3 → simply remove


Case 2:


5
/
3

4

Delete 3 → replace with 4


Case 3:

5


/
3 7
/
6

Delete 5 → replace with 6


---

## Reference

- Study Plan: https://leetcode.com/studyplan/leetcode-75/  
- Problem Platform: LeetCode

