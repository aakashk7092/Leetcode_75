# Day 66 – Edit Distance

**Study Plan:** LeetCode 75  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Dynamic Programming, String DP, 2D DP  
**Status:** Completed  

---

## Problem Overview

Given two strings:

- `word1`
- `word2`

Return the **minimum number of operations required** to convert `word1` into `word2`.

Allowed operations:

1. Insert a character  
2. Delete a character  
3. Replace a character  

---

## Key Observation

At each character comparison we have two possibilities:

1️⃣ Characters match  
No operation needed.

2️⃣ Characters differ  
We must perform one of the operations:

- Insert
- Delete
- Replace

So the problem becomes finding the **minimum cost among these operations**.

---

## State Definition

Let:


dp[i][j]


represent the **minimum operations needed to convert**


word1[0...i-1] → word2[0...j-1]


---

## Base Cases

If one string is empty:


dp[0][j] = j
dp[i][0] = i


Explanation:

- Convert empty → word → insert all characters
- Convert word → empty → delete all characters

---

## Recurrence Relation

### If characters match


dp[i][j] = dp[i-1][j-1]


---

### If characters differ

We take the minimum of three operations:


dp[i][j] = 1 + min(
dp[i][j-1], // Insert
dp[i-1][j], // Delete
dp[i-1][j-1] // Replace
)


---

## Approach (Bottom-Up DP)

1. Create a DP table of size `(m+1) × (n+1)`.
2. Initialize base cases.
3. Fill the table row by row.
4. Use recurrence relation.
5. Final answer is stored in:


dp[m][n]


---

## Example

Input:


word1 = "horse"
word2 = "ros"


Operations:


horse → rorse (replace h)
rorse → rose (delete r)
rose → ros (delete e)


Output:


3


---

## DP Table Visualization

Example:

  ""  r  o  s

"" 0 1 2 3
h 1
o 2
r 3
s 4
e 5


Table fills based on previous states.

---

## Complexity Analysis

Let:


m = length of word1
n = length of word2


Time Complexity:


O(m × n)


Space Complexity:


O(m × n)


---

## Pattern Identified

2D Dynamic Programming  
String Transformation DP  
Edit Distance Pattern  

---

## Key Learnings

- Handling multiple decision choices
- Building 2D DP table
- Understanding insert/delete/replace transitions
- Comparing prefixes of two strings

---

## Interview Insight

Edit Distance is a **fundamental DP problem**.

It appears in many variations:

- Delete Operation for Two Strings
- Longest Common Subsequence
- Minimum ASCII Delete Sum
- String Alignment Problems

Mastering this pattern unlocks many string DP questions.

---

## Reference

Study Plan: LeetCode 75  
Problem: LeetCode – Edit Distance
