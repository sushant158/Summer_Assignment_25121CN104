#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], temp[100], rev;
    int i, length;

    printf("Enter a string");
    scanf("%s", str);

    strcpy(temp, str);  

    length = strlen(str);
    for (i = 0; i < length / 2; i++)
    {
        rev = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = rev;
    }

    if (strcmp(str, temp) == 0)
    {
        printf("The string is  palindrome");
    }
    else
    {
        printf("The string is not palindrome");
    }

    return 0;
}
