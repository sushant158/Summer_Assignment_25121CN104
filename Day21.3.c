#include <stdio.h>
#include <string.h>

int main()
{
    char str[100]="sushant";
    int i, vowels = 0, consonants = 0;

    printf("Enter a string: ");

    for (i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= 'a' && str[i] <= 'z'))
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||str[i] == 'o' || str[i] == 'u' ||str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||str[i] == 'O' || str[i] == 'U')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    printf("Number of vowels are %d\n", vowels);
    printf("Number of consonants are %d", consonants);

    return 0;
}
