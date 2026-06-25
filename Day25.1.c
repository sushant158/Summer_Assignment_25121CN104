#include <stdio.h>

int main()
{
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};

    int n1 = 4, n2 = 4;
    int mergedArr[8];

    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            mergedArr[k++] = arr1[i++];
        }
        else
        {
            mergedArr[k++] = arr2[j++];
        }
    }

    while (i < n1)
    {
        mergedArr[k++] = arr1[i++];
    }

    while (j < n2)
    {
        mergedArr[k++] = arr2[j++];
    }

    printf("Merged Array is \n");

    for (i = 0; i < n1 + n2; i++)
    {
        printf("%d ", mergedArr[i]);
    }

    return 0;
}
