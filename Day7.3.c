#include<stdio.h>
int sumDigits(int x);
int main(){
    int num;
    printf("Enter the number");
    scanf("%d", &num);
    printf("Sum of digits are %d", sumDigits(num));
}
int sumDigits(int n)
{
    if (n == 0)      
        return 0;

    return (n % 10) + sumDigits(n / 10);
}
