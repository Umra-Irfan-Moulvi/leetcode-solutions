#include <stdio.h>

int main()
{
    // Test Case 1: Target is present
    int nums1[] = {1, 3, 5, 7, 9};
    int target1 = 7;
    int n1 = 5;

    int left = 0;
    int right = n1 - 1;
    int result = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums1[mid] == target1)
        {
            result = mid;
            break;
        }
        else if (nums1[mid] < target1)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    printf("Test Case 1: %d\n", result);


    // Test Case 2: Target is not present
    int nums2[] = {1, 3, 5, 7, 9};
    int target2 = 6;
    int n2 = 5;

    left = 0;
    right = n2 - 1;
    result = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums2[mid] == target2)
        {
            result = mid;
            break;
        }
        else if (nums2[mid] < target2)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    printf("Test Case 2: %d\n", result);

    return 0;
}