#include <stdio.h>

int main()
{
    int mat[3][3],flag=1;

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
            if (mat[i][j]!=mat[j][i])
            {
                flag=0;
            }
            
        }
    }
    if (flag)
    {
        printf("The matrix is symetric");
    }
    else{
         printf("The matrix is not symetric");
    }
    

    return 0;
}
