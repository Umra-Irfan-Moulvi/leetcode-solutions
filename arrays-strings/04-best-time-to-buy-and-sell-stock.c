#include <stdio.h>

int main()
{
    // Test Case 1: Typical case
    int prices1[] = {7, 1, 5, 3, 6, 4};
    int n1 = 6;

    int minPrice = prices1[0];
    int maxProfit = 0;

    for (int i = 1; i < n1; i++)
    {
        if (prices1[i] < minPrice)
        {
            minPrice = prices1[i];
        }

        int profit = prices1[i] - minPrice;

        if (profit > maxProfit)
        {
            maxProfit = profit;
        }
    }

    printf("Test Case 1: %d\n", maxProfit);


    // Test Case 2: Edge case - prices always decrease
    int prices2[] = {7, 6, 4, 3, 1};
    int n2 = 5;

    minPrice = prices2[0];
    maxProfit = 0;

    for (int i = 1; i < n2; i++)
    {
        if (prices2[i] < minPrice)
        {
            minPrice = prices2[i];
        }

        int profit = prices2[i] - minPrice;

        if (profit > maxProfit)
        {
            maxProfit = profit;
        }
    }

    printf("Test Case 2: %d\n", maxProfit);

    return 0;
}