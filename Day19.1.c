#include <stdio.h>

int main()
{
    int mat1[3][3], mat2[3][3], sumMat[3][3];

    printf("Enter the elements for the first matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the elements for the second matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sumMat[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("The sum of the matrices is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", sumMat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
