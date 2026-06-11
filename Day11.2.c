#include <stdio.h>
int maximum(int x, int y);
int main()
{
    int num1, num2;
    printf("Enter two numbers");
    scanf("%d %d", &num1, &num2);
    printf("Maximum of two numbers is =%d", maximum(num1, num2));
}
int maximum(int num1, int num2)
{
    return (num1 > num2) ? num1 : num2;
}
