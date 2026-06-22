#include <stdio.h>
int main()
{
    char str[100]="ee vv cc dd ee ", ch;
    int i, count = 0;

    printf("Enter the character to find");
    scanf(" %c", &ch); 

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }

    printf("Frequency of '%c' is  %d", ch, count);

    return 0;
}
