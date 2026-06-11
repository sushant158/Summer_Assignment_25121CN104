#include <stdio.h>
int prime(int x);
int main()
{
    int num;
    printf("Enter the number to be checked\n");
    scanf("%d", &num);
    if(prime){
        printf("The Entered number is a prime number");
    }
    else{
     printf("The Entered number is not a prime number");
    }
    return 0;
}
int prime(int num)
{
    int i, flag = 0;
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
        return 1;
    }
    else
    {
        return 0;
    }
}
