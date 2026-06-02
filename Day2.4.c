#include <stdio.h>
int main()
{
    int num, r, rev=0, temp;
    printf("Enter the number\n");
    scanf("%d", &num);
    temp = num;
    while (temp > 0)
    {

        r = temp % 10;
        rev = rev*10 + r;
        temp = temp / 10;
    }
    if (num==rev)
    {
        printf("The  entered number is palindrome");
    }
    else{
        printf("Entered number is not palindrome");
    }
    

    return 0;
}
