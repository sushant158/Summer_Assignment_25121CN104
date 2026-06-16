#include <stdio.h>

int main()
{
    int arr[8] = {1, 2, 3, 2, 4, 1, 5, 3};

    printf("Array after removing duplicates\n");

    for (int i = 0; i < 8; i++)
    {
        int duplicate = 0;

        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                duplicate = 1;
                break;
            }
        }

        if (duplicate == 0)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
