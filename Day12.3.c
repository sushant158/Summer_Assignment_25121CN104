#include <stdio.h>
int fib(int x);
int main()
{
    int num;
    printf("Enter the the number upto which you need fibonacci series");
    scanf("%d", &num);
    printf("fibonacci series is:\n");
    for (int i = 0; i <= num; i++)
    {
        printf("%d ", fib(i));
    }
}
int fib(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return fib(num - 1) + fib(num - 2);
    }
}
