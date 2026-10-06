## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

We compare the characters of all strings at the same position. We continue while all strings have the same character and stop when a mismatch or the end of a string is reached.

### Complexity

- Time: O(n × m)
- Space: O(1)

### Notes

Test Case 1: ["flower", "flow", "flight"] → "fl"

Test Case 2: ["dog", "racecar", "car"] → ""

The solution was tested locally and accepted on LeetCode.