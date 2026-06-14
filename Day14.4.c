#include <stdio.h>
int main()
{
    int arr[10] = {1, 23, 3, 64, 7, 6, 10, 10, 1, 20}, i;
    printf("The duplicate are\n");
    for (i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
}
