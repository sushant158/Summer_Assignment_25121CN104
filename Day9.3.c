#include<stdio.h>
int main(){
    int rows;
    char ch ='A'-1;
    printf("Enter the number of rows");
    scanf("%d",&rows);
    for (int  i = 1; i <=rows; i++)
    {
        ch+=1;
        for (int j = 1; j<=i; j++)
        {
            
            printf("%c",ch);
        }
        printf("\n");
        
    }
    
}
