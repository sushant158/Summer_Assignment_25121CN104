#include <stdio.h>

int main()
{
    int mat[3][3],sum=0;

    printf("Enter the elements for the  matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i==j)
            {
                sum+=mat[i][j];
            }
            
        }
    }
     printf("Diagonal sum = %d\n", sum);

    return 0;
}
