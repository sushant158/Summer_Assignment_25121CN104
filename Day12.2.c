#include <stdio.h>
#include <math.h>
int checkArmstrong(int x);
int main()
{
    int num;
    printf("Enter the number");
    scanf("%d", &num);
    if (checkArmstrong(num))
    {
        printf("The number is armstrong number");
    }
    else
    {
        printf("The number is not armstrong number");
    }
    return 0;
}
int checkArmstrong(int num)
{
    int digit = 0, temp, r, arm = 0;
    temp = num;
    while (num > 0)
    {
        digit++;
        num = num / 10;
    }
    num = temp;
    for (int i = 0; i < digit; i++)
    {
        r = num % 10;
        arm += pow(r, digit);
        num = num / 10;
    }
    if (temp == arm)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
