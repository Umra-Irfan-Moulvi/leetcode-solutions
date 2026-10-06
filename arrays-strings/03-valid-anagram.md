## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

We use two frequency arrays to count how many times each lowercase letter appears in both strings. If all 26 character frequencies are equal, the two strings are anagrams.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

Test Case 1: "anagram", "nagaram" → true

Test Case 2: "rat", "car" → false

The solution was tested locally and accepted on LeetCode.