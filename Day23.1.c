#include <stdio.h>
#include <string.h>
int main()
{
    char str[100]="cc bb l aa";
    int i, j, count, length;

    length = strlen(str);

    for (i = 0; i < length; i++)
    {
        count = 0;

        for (j = 0; j < length; j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }

        if (count == 1)
        {
            printf("First non-repeating character is '%c'\n", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found");

    return 0;
}
