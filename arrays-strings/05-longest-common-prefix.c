#include <stdio.h>
#include <string.h>

int main()
{
    // Test Case 1: Typical case
    char *strs1[] = {"flower", "flow", "flight"};
    int n1 = 3;

    int i = 0;
    int j = 0;

    while (strs1[0][i] != '\0')
    {
        char current = strs1[0][i];

        for (j = 1; j < n1; j++)
        {
            if (strs1[j][i] != current || strs1[j][i] == '\0')
            {
                break;
            }
        }

        if (j < n1)
        {
            break;
        }

        i++;
    }

    printf("Test Case 1: ");

    for (int k = 0; k < i; k++)
    {
        printf("%c", strs1[0][k]);
    }

    printf("\n");


    // Test Case 2: No common prefix
    char *strs2[] = {"dog", "racecar", "car"};
    int n2 = 3;

    i = 0;
    j = 0;

    while (strs2[0][i] != '\0')
    {
        char current = strs2[0][i];

        for (j = 1; j < n2; j++)
        {
            if (strs2[j][i] != current || strs2[j][i] == '\0')
            {
                break;
            }
        }

        if (j < n2)
        {
            break;
        }

        i++;
    }

    printf("Test Case 2: ");

    if (i == 0)
    {
        printf("No common prefix");
    }
    else
    {
        for (int k = 0; k < i; k++)
        {
            printf("%c", strs2[0][k]);
        }
    }

    printf("\n");

    return 0;
}