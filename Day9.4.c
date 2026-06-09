#include<stdio.h>
int main(){
    int i,j,rows;
    printf("Enter the number of rows");
    scanf("%d",&rows);
    for ( i = 0; i < rows; i++)
    {
        printf("*");
        if (i==0||i==rows-1)
        {
            for ( j = 1; j < rows-1; j++)
            {
                printf("*");
              
            }
            
        }
        else{
            for ( j = 1; j < rows-1; j++)
            {
                 printf(" ");
            }
            
        }
        printf("*\n");
    }
    
}
