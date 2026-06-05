#include<stdio.h>
int main(){
    int num,sum=0;
    printf("Enter the number");
    scanf("%d",&num);
    for (int i = 1; i <=num/2; i++)
    {
        if (num%i==0)
        {
            sum+=i;
        }
        
    }
    if (num==sum)
    {
        printf("The entered number is perfect number");
    }
    else{
          printf("The entered number is not perfect number");
    }
    return 0;
    
    
}
