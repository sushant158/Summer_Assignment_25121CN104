#include<stdio.h>
#include<math.h>
int main(){
    int num,digit=0,temp,r,arm=0;
    printf("Enter the number");
    scanf("%d",&num);
    temp=num;
    while (num>0)
    {
        digit++;
        num=num/10;

    }
    num=temp;
    for (int i = 0; i < digit; i++)
    {
        r=num%10;
        arm+=pow(r,digit);
        num=num/10;

    }
    if (temp==arm)
    {
        printf("The number is armstrong number");
    }
    else{
        printf("The number is not armstrong number");
    }
    
    
    

}
