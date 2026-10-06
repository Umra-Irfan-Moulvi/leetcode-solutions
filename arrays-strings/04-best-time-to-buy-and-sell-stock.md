## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

We keep track of the minimum price seen so far while going through the array. For each price, we calculate the possible profit and update the maximum profit when a larger profit is found.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

Test Case 1: [7, 1, 5, 3, 6, 4] → 5

Test Case 2: [7, 6, 4, 3, 1] → 0

The solution was tested locally and accepted on LeetCode.