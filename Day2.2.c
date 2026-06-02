#include<stdio.h>
int main(){
    int num,r,rev=0;
    printf("Enter the number\n");
    scanf("%d",&num);
    while (num>0)
    {
        r=num%10;
        rev=rev*10+r;
        num=num/10;

    }
    printf("The reverse of the number is:%d",rev);
    return 0;
    
    
}
