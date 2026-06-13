#include <stdio.h>
int main()
{
    int arr[50] = {}, num;
    float sum = 0, avg = 0;
    printf("Enter the number of elements\n");
    scanf("%d", &num);
    printf("Enter the elements\n");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < num; i++)
    {
        sum += arr[i];
    }
    avg = sum / num;
    printf("The sum is %f and the average is %f ", sum, avg);

    return 0;
}
