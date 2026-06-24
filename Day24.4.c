#include <stdio.h>

int main()
{
    char str[100]="hheelloo", result[100];
    int i, j, k = 0, found;


    for (i = 0; str[i] != '\0'; i++)
    {
        found = 0;
        for (j = 0; j < k; j++)
        {
            if (str[i] == result[j])
            {
                found = 1;
                break;
            }
        }
        if (!found)
        {
            result[k++] = str[i];
        }
    }

    result[k] = '\0';

    printf("String after removing duplicate is %s", result);

    return 0;
}
