#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100]="hell", str2[100]="lleh", temp;
    int i, j, len1, len2;

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 != len2)
    {
        printf("The strings are not anagrams");
    }
    else
    {
        for (i = 0; i < len1 - 1; i++)
        {
            for (j = i + 1; j < len1; j++)
            {
                if (str1[i] > str1[j])
                {
                    temp = str1[i];
                    str1[i] = str1[j];
                    str1[j] = temp;
                }
            }
        }
        for (i = 0; i < len2 - 1; i++)
        {
            for (j = i + 1; j < len2; j++)
            {
                if (str2[i] > str2[j])
                {
                    temp = str2[i];
                    str2[i] = str2[j];
                    str2[j] = temp;
                }
            }
        }
        if (strcmp(str1, str2) == 0)
            printf("The strings are anagrams");
        else
            printf("The strings are not anagrams");
    }

    return 0;
}
