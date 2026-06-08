#include<stdio.h>
int main(){
    int rows;
    char ch ='A'-1;
    printf("Enter the number of rows");
    scanf("%d",&rows);
    for (int  i = 1; i <=rows; i++)
    {
        ch='A'-1;
        for (int j = 1; j<=i; j++)
        {
            ch+=1;
            printf("%c",ch);
        }
        printf("\n");
        
    }
    
}
