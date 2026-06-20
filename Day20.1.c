#include <stdio.h>

int main()
{
    int mat1[3][3], mat2[3][3], mulMat[3][3], i, j, k;

    printf("Enter the elements for the first matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the elements for the second matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            mulMat[i][j] = 0; 

            for (k = 0; k < 3; k++)
            {
                mulMat[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("The multiplication of the matrices is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", mulMat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
