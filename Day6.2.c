#include<stdio.h>
#include<math.h>
int main(){
      int num,decimal=0,i=0,digit;
     printf("Enter a binary number");
    scanf("%d", &num);
    
    while (num>0)
    {
        digit=num%10;
        decimal+=digit*pow(2,i);
        num=num/10;
        i++;
    }
    printf("Decimal= %d",decimal);
    
}
