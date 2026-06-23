#include <stdio.h>
#include <string.h>

int main()
{
    char str[100]="aaa bb ccc dddde";
    int i, j, count, maxCount = 0;
    char maxChar;

  

    for (i = 0; str[i] != '\0'; i++)
    {
        count = 0;

        for (j = 0; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }

        if (count > maxCount)
        {
            maxCount = count;
            maxChar = str[i];
        }
    }

    printf("Maximum occurring character is %c and its frequency is %d", maxChar,maxCount);

    return 0;
}
