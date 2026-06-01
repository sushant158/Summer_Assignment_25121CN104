#include<stdio.h>
int main(){
    int N,sum=0;
    printf("Enter the number upto which you need sum\n");
    scanf("%d",&N);
    for (int i = 1; i <=N; i++)
    {
        sum+=i;
    }
    printf("SUM=%d",sum);
    
}
