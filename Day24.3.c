#include <stdio.h>
#include <string.h>

int main()
{
    char str[100]="what is the longest word in dictionary ?", longest[100];
    int i, start = 0, length = 0, maxLength = 0;

  

    for (i = 0; ; i++)
    {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            length++;
        }
        else
        {
            if (length > maxLength)
            {
                maxLength = length;
                strncpy(longest, str + start, length);
                longest[length] = '\0';
            }

            length = 0;
            start = i + 1;
        }

        if (str[i] == '\0')
            break;
    }

    printf("Longest word is %s and its length %d is", longest,maxLength);
   

    return 0;
}
