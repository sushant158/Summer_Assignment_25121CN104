#include <stdio.h>
#include <string.h>
int main()
{
    char str[100]="Hello myself Sushant kumar";
    int i, count = 0;
    
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }

    printf("Number of words are %d", count + 1);

    return 0;
}
