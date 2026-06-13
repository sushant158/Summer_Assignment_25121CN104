#include <stdio.h>
int checkPerfect(int num);
int main()
{
    int num;
    printf("Enter the number");
    scanf("%d", &num);

    if (checkPerfect(num))
    {
        printf("The entered number is perfect number");
    }
    else
    {
        printf("The entered number is not perfect number");
    }
    return 0;
}
int checkPerfect(int num)
{
    int sum = 0;
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (num == sum)
    {
        return 1;
       
    }
    else
    {
        return 0;
        
    }
    
}
