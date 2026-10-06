## Problem: Reverse String (Easy)

**Link:** https://leetcode.com/problems/reverse-string/

### Approach

We use two pointers, one starting from the beginning of the string and the other from the end. We swap the characters at these positions and move the pointers toward the center until the entire string is reversed.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

Test Case 1: "hello" → "olleh"

Test Case 2: "a" → "a"

The solution was tested locally and accepted on LeetCode.