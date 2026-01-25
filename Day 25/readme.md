# Day 25 – Asteroid Collision

**Study Plan:** LeetCode 75  
**Official Study Plan URL:** https://leetcode.com/studyplan/leetcode-75/  
**Platform:** LeetCode  
**Difficulty:** Medium  
**Topics:** Stack, Simulation  
**Status:** Completed  

---

## Problem Overview
You are given an integer array `asteroids`, where each element represents an asteroid moving in a straight line.

- Positive value → moving to the right  
- Negative value → moving to the left  

When two asteroids collide:
- The smaller one explodes  
- If both are the same size, **both explode**  
- Asteroids moving in the same direction never collide  

Your task is to return the state of the asteroids after all collisions.

---

## Key Observations
- Collisions only happen when:
  - A right-moving asteroid meets a left-moving asteroid.
- The collision process is sequential and depends on previous outcomes.
- This behavior naturally fits a **stack-based simulation**.

---

## Approach
Use a **stack** to simulate the collisions:

- Traverse the asteroids one by one.
- For each asteroid:
  - While there is a possible collision with the top of the stack:
    - Compare their sizes.
    - Remove the smaller asteroid.
    - Continue until no collision is possible or the current asteroid is destroyed.
- If the current asteroid survives, push it onto the stack.

At the end, the stack represents the final state.

---

## Algorithm Summary
1. Initialize an empty stack.
2. Traverse each asteroid in order.
3. While a collision is possible with the stack top:
   - Resolve the collision by size comparison.
4. If the current asteroid survives, push it onto the stack.
5. After traversal, return the stack contents.

---

## Complexity Analysis
- **Time Complexity:** `O(n)`  
  (each asteroid is pushed and popped at most once)
- **Space Complexity:** `O(n)` (for the stack)

---

## Key Learnings
- Using stack to simulate chain reactions
- Handling multiple collisions in sequence
- Writing robust simulation logic
- Understanding directional constraints in physics-based problems

---

## Reference
- Study Plan: https://leetcode.com/studyplan/leetcode-75/  
- Problem Platform: LeetCode
