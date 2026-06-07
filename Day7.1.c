#include <stdio.h>
int fact(int X);
int main()
{
    int num;
    printf("Enter the number for factorial calculation");
    scanf("%d", &num);
    printf("Factorial is %d", fact(num));
}
int fact(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num * fact(num - 1);
    }
}
