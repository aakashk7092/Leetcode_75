 Dota2 Senate – Predict Party Victory
Question

In the Dota2 senate, each senator belongs to one of two parties:

Radiant (R)

Dire (D)

Each senator can ban one senator from the opposing party who appears after them in the sequence.
The banning process continues in rounds until senators from only one party remain.

Your task is to determine which party will win based on the given senate string.

🧠 Approach

Use two queues to track the positions of senators from both parties.

One queue for Radiant

One queue for Dire

Traverse the senate string and store the indices of each senator in their respective queue.

While both queues contain senators:

Compare the front indices of both queues.

The senator with the smaller index acts first and bans the opponent.

The winning senator is reinserted into their queue with an updated index (current index + length of senate) to represent participation in the next round.

When one queue becomes empty:

If the Radiant queue is empty → Dire wins

Otherwise → Radiant wins

This approach efficiently simulates the round-based banning process and guarantees the correct winner.

Complexity Analysis

Time Complexity: O(n)

Space Complexity: O(n)

Each senator is processed in order using queues, making the solution optimal.

 Reference

LeetCode Problem: Dota2 Senate

Problem ID: 649

Topic: Queue, Simulation
