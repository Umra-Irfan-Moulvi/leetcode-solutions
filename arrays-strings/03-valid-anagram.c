#include <stdio.h>
#include <string.h>

int main()
{
    // Test Case 1: Typical case
    char str1[] = "anagram";
    char str2[] = "nagaram";

    int count1[26] = {0};
    int count2[26] = {0};

    for (int i = 0; str1[i] != '\0'; i++)
    {
        count1[str1[i] - 'a']++;
    }

    for (int i = 0; str2[i] != '\0'; i++)
    {
        count2[str2[i] - 'a']++;
    }

    int isAnagram = 1;

    for (int i = 0; i < 26; i++)
    {
        if (count1[i] != count2[i])
        {
            isAnagram = 0;
            break;
        }
    }

    printf("Test Case 1: ");

    if (isAnagram)
        printf("true\n");
    else
        printf("false\n");


    // Test Case 2: Edge case
    char str3[] = "rat";
    char str4[] = "car";

    int count3[26] = {0};
    int count4[26] = {0};

    for (int i = 0; str3[i] != '\0'; i++)
    {
        count3[str3[i] - 'a']++;
    }

    for (int i = 0; str4[i] != '\0'; i++)
    {
        count4[str4[i] - 'a']++;
    }

    isAnagram = 1;

    for (int i = 0; i < 26; i++)
    {
        if (count3[i] != count4[i])
        {
            isAnagram = 0;
            break;
        }
    }

    printf("Test Case 2: ");

    if (isAnagram)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}