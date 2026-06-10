#include<stdio.h>
int main(){
    int rows;
    printf("Enter the number of rows");
    scanf("%d",&rows);

    for (int i = 1; i <= rows; i++) {

        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j <= i)
                printf("%d", j);
            else
                printf("%d", 2 * i - j);
        }

        printf("\n");
    }

    return 0;
}

