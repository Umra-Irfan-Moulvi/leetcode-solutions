## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

We use two pointers, left and right, to define the search range. We repeatedly check the middle element and eliminate half of the search range depending on whether the target is smaller or larger.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

Test Case 1: [1, 3, 5, 7, 9], target = 7 → 3

Test Case 2: [1, 3, 5, 7, 9], target = 6 → -1

The solution was tested locally and accepted on LeetCode.