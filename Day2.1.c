#include<stdio.h>
int main(){
    int num,r,sum=0;
    printf("Enter the number\n");
    scanf("%d",&num);
    while (num>0)
    {
        r=num%10;
        sum+=r;
        num=num/10;

    }
    printf("The sum of digits are:%d",sum);
    return 0;
    
    
}
