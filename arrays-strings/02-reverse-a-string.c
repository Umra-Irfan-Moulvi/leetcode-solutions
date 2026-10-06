#include <stdio.h>
#include <string.h>

int main()
{
    // Test Case 1: Typical case
    char str1[] = "hello";
    int n1 = strlen(str1);

    printf("Test Case 1: ");

    for (int i = n1 - 1; i >= 0; i--)
    {
        printf("%c", str1[i]);
    }

    printf("\n");

    // Test Case 2: Edge case with one character
    char str2[] = "a";
    int n2 = strlen(str2);

    printf("Test Case 2: ");

    for (int i = n2 - 1; i >= 0; i--)
    {
        printf("%c", str2[i]);
    }

    printf("\n");

    return 0;
}