#include <stdio.h>
int main()
{
    int num, largestPrime = 0, flag = 1;
    printf("Enter the number");
    scanf("%d", &num);
    for (int i = 2; i <=num; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    flag = 0;
                    break;
                    ;
                }
            }
            if (flag == 1)
            {
                largestPrime = i;
            }
        }

    }
    printf("The largest prime factor is %d", largestPrime);
}
