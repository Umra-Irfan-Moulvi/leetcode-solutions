## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

We use a stack to store opening brackets. When a closing bracket is found, we check whether it matches the most recently added opening bracket.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

Test Case 1: "()[]{}" → true

Test Case 2: "(]" → false

The solution was tested locally and accepted on LeetCode.