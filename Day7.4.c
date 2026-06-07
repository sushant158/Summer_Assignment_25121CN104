#include <stdio.h>
int reverse(int n);
int main()
{
    int num;

    printf("Enter a number");
    scanf("%d", &num);

    printf("Reverse of number is  %d", reverse(num));

    return 0;
}
    int rev = 0;
int reverse(int n)
{

    if (n == 0)    
        return rev;

    rev = rev * 10 + (n % 10);
    return reverse(n / 10);
}
