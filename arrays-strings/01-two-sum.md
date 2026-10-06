## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

We use two loops to check every possible pair of numbers in the array. If the sum of two numbers is equal to the target, we print their indices.

### Complexity

- Time: O(n²)
- Space: O(1)

### Notes

Test Case 1: nums = [2, 7, 11, 15], target = 9 → [0, 1]

Test Case 2: nums = [3, 3], target = 6 → [0, 1]

The solution was tested locally and accepted on LeetCode.