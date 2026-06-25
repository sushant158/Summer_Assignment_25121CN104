#include <stdio.h>

int main()
{
    char str1[100]="programing", str2[100]="gaming";
    int i, j, k;
    int found;

 
    printf("Common characters are \n");

    for (i = 0; str1[i] != '\0'; i++)
    {
        found = 0;

        for (j = 0; str2[j] != '\0'; j++)
        {
            if (str1[i] == str2[j])
            {
                found = 1;
                break;
            }
        }

        for (k = 0; k < i; k++)
        {
            if (str1[k] == str1[i])
            {
                found = 0;
                break;
            }
        }

        if (found)
        {
            printf("%c ", str1[i]);
        }
    }

    return 0;
}
