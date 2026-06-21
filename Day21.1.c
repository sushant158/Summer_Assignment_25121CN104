#include <stdio.h>

int main()
{
    char str[100] = "sushant";
    int i = 0;
    char ch = str[0];

    while (ch != '\0')
    {
        i++;
        ch = str[i];
    }

    printf("The length of the string is %d", i);

    return 0;
}
