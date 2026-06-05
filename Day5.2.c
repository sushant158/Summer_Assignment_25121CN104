#include<stdio.h>
int main(){
    int num,sum=0,temp,r;
    printf("Enter the number");
    scanf("%d",&num);  
    temp=num;
    while (num>0)
    {
       int fact=1;
        r=num%10;
        for (int i = 1; i <=r; i++)
        {
            fact*=i;
        }
        sum+=fact;
        num=num/10;
        
    }
    if (sum==temp)
    {
        printf("The entered number is strong number");
    }
    else{
         printf("The entered number is not strong number");
    }
    
     
}
