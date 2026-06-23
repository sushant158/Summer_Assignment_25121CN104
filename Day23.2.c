#include <stdio.h>
#include <string.h>
int main()
{
    char str[100]="hell ss is on";
    int i, j, length;

    length = strlen(str);

    for (i = 0; i < length; i++)
    {
        for (j = i + 1; j < length; j++)
        {
            if (str[i] == str[j])
            {
                printf("First repeating character is '%c'\n", str[i]);
                return 0;
            }
        }
    }

    printf("No repeating character found");

    return 0;
}
