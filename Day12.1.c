#include <stdio.h>
int main()
{
    int checkPalindrome(int x);
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    if (checkPalindrome(num))
    {
        printf("Entered number is palindrome");
    }
    else
    {
        printf("Entered number is not palindrome");
    }
    return 0;
}
int checkPalindrome(int num)
{
    int r, rev = 0, temp;
    temp = num;
    while (num > 0)
    {
        r = num % 10;
        rev = rev * 10 + r;
        num = num / 10;
    }
    if (rev == temp)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
