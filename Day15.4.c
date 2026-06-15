#include <stdio.h>
int main()
{
    int arr[10] = {1, 23, 0, 64, 0, 6, 10, 10, 1, 20}, i, temp;
    printf("The array after moving zeroes to the end \n");
    int j = 0;
    for (i = 0; i < 10; i++)
    {
        if (arr[i] != 0)
        {
            arr[j] = arr[i];
            j++;
        }
    }
    while (j < 10)
    {
        arr[j] = 0;
        j++;
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}
