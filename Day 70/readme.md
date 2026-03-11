# Day 70 – Implement Trie (Prefix Tree)

**Study Plan:** LeetCode 75  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Trie, Data Structures, String Processing  
**Status:** Completed  

---

## Problem Overview

Implement a **Trie (Prefix Tree)** data structure that supports the following operations:

- `insert(word)` → Inserts a word into the trie
- `search(word)` → Returns true if the word exists
- `startsWith(prefix)` → Returns true if any word starts with the given prefix

A Trie is a **tree-like data structure used to store strings efficiently**.

---

## Key Idea

Each node in the Trie represents a **character**.

Each node contains:

- 26 pointers (for lowercase English letters)
- A boolean flag to mark **end of a word**

Structure:


Node
├── children[26]
└── isEndOfWord


---

## Trie Structure Example

Insert words:


apple
app


Trie structure:

   root
    |
    a
    |
    p
    |
    p  (word ends here → "app")
    |
    l
    |
    e  (word ends here → "apple")

---

## Operations

### 1️⃣ Insert Word

Traverse character by character.

If a node does not exist → create it.

At the end mark:


isEndOfWord = true


---

### 2️⃣ Search Word

Traverse the Trie following characters.

If any node is missing → return **false**.

After traversal:

Return true only if:


isEndOfWord == true


---

### 3️⃣ Prefix Search

Similar to search.

Difference:

We do **not require end-of-word flag**.

If all characters exist → prefix exists.

---

## Example

Operations:


insert("apple")
search("apple") → true
search("app") → false
startsWith("app") → true
insert("app")
search("app") → true


---

## Complexity Analysis

Let:


L = length of word


Insert:


O(L)


Search:


O(L)


Prefix check:


O(L)


---

## Space Complexity

Worst case:


O(N × L × 26)


Where:

- `N` = number of words
- `L` = average word length

---

## Pattern Identified

Trie (Prefix Tree)  
Efficient String Lookup  
Dictionary Data Structure  

---

## Key Learnings

- Building custom tree-based data structures
- Efficient prefix searching
- Managing character indexing
- Memory allocation for nodes

---

## Interview Insight

Trie is heavily used in problems like:

- Word Search II
- Replace Words
- Word Break
- Auto-complete systems
- Search suggestions systems

Understanding Trie is very useful for **string-heavy interview problems**.

---

## Reference

Study Plan: LeetCode 75  
Problem: Implement Trie (Prefix Tree)
