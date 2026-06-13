#include<stdio.h>
int main(){
    int arr[50]={},num,countEven=0,countOdd=0;
    printf("Enter the number of elements\n");
    scanf("%d",&num);
    printf("Enter the elements\n");
    for (int i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < num; i++)
    {
        if(arr[i]%2==0){
          countEven++;
        }
        else{
            countOdd++;
        }
    }
    printf("The even number of elements are %d and  odd number element are %d",countEven,countOdd);
    
}
