#include<stdio.h>
int sum(int x,int y);

int main(){
int num1,num2;
printf("Enter two numbers");
scanf("%d %d",&num1,&num2);
printf("Sum of two numbers=%d",sum(num1,num2));
  return 0;
}
int sum(int num1, int num2){
    return  num1+num2;
}
