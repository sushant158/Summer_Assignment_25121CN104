#include<stdio.h>
int main(){
    int arr[50]={},num;
    printf("Enter the number of elements\n");
    scanf("%d",&num);
    printf("Enter the elements\n");
    for (int i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The elements of array are:\n");
    for (int i = 0; i < num; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
    
    
}
