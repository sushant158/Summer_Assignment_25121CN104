#include <stdio.h>

int main()
{
    char str[100]="This to shall pass";
    int i, j = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0'; 

    printf("String without spaces  %s", str);

    return 0;
}
