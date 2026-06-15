#include <stdio.h>
int main()
{
    int arr[10] = {1, 23, 3, 64, 7, 6, 10, 10, 1, 20}, i,temp;
    printf("The array after left rotation is \n");
    temp=arr[0];
    for (i = 0; i < 9; i++)
    {
        arr[i]=arr[i+1];
        
    }
    arr[9]=temp;
    for ( i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
    }
    
}
