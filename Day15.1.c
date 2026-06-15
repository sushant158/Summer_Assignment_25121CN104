#include <stdio.h>
int main()
{
    int arr[10] = {1, 23, 3, 64, 7, 6, 10, 10, 1, 20}, i,temp;
    printf("The reversed array is \n");
    for (i = 0; i < 10/2; i++)
    {
        temp=arr[i];
        arr[i]=arr[9-i];
        arr[9-i]=temp;
        
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
    }
    
}
