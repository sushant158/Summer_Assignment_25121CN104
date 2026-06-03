#include <stdio.h>
int main()
{
    int num, i, flag = 0;
    printf("Enter the number to be checked\n");
    scanf("%d", &num);
    if (num <= 1)
    {
        flag = 1;
    }
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("The Entered number is a prime number");
    }
    else
    {
        printf("The Entered number is not a prime number");
    }
    return 0;
}
