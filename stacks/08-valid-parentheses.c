#include <stdio.h>
#include <string.h>

int isValid(char str[])
{
    char stack[10000];
    int top = -1;

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        // Opening brackets are pushed onto the stack
        if (ch == '(' || ch == '{' || ch == '[')
        {
            top++;
            stack[top] = ch;
        }

        // Check closing brackets
        else if (ch == ')' || ch == '}' || ch == ']')
        {
            if (top == -1)
            {
                return 0;
            }

            char open = stack[top];
            top--;

            if ((ch == ')' && open != '(') ||
                (ch == '}' && open != '{') ||
                (ch == ']' && open != '['))
            {
                return 0;
            }
        }
    }

    return top == -1;
}

int main()
{
    // Test Case 1: Typical case
    char str1[] = "()[]{}";

    printf("Test Case 1: ");

    if (isValid(str1))
        printf("true\n");
    else
        printf("false\n");


    // Test Case 2: Edge case - mismatched brackets
    char str2[] = "(]";

    printf("Test Case 2: ");

    if (isValid(str2))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}