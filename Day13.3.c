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
    int largest=arr[0];
    int smallest=arr[0];
    for (int i = 1; i < num; i++)
    {
        if(largest<arr[i]){
            largest=arr[i];
        }
        else if(smallest>arr[i]){
            smallest=arr[i];
        }
    }
    printf("The largest element is %d and the smallest element is %d",largest,smallest);
    
}
