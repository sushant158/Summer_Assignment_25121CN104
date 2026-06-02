#include<stdio.h>
int main(){
    int num,r,product=1;
    printf("Enter the number\n");
    scanf("%d",&num);
    while (num>0)
    {
        r=num%10;
        product*=r;
        num=num/10;

    }
    printf("The product of digits are:%d",product);
    return 0;
    
    
}
