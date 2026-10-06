## Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

We first move all non-zero elements to the beginning of the array while maintaining their original order. We then fill the remaining positions with zeroes.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

Test Case 1: [0, 1, 0, 3, 12] → [1, 3, 12, 0, 0]

Test Case 2: [0, 0, 0] → [0, 0, 0]

The solution was tested locally and accepted on LeetCode.