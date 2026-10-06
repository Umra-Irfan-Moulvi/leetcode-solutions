#include <stdio.h>

int main()
{
    // Test Case 1: Typical case
    int nums1[] = {2, 7, 11, 15};
    int target1 = 9;
    int n1 = 4;

    printf("Test Case 1: ");

    for (int i = 0; i < n1; i++)
    {
        for (int j = i + 1; j < n1; j++)
        {
            if (nums1[i] + nums1[j] == target1)
            {
                printf("[%d, %d]\n", i, j);
            }
        }
    }

    // Test Case 2: Edge case with duplicate numbers
    int nums2[] = {3, 3};
    int target2 = 6;
    int n2 = 2;

    printf("Test Case 2: ");

    for (int i = 0; i < n2; i++)
    {
        for (int j = i + 1; j < n2; j++)
        {
            if (nums2[i] + nums2[j] == target2)
            {
                printf("[%d, %d]\n", i, j);
            }
        }
    }

    return 0;
}