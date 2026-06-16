#include<stdio.h>
int main(){
    int arr[6]={1,2,3,5,6},actualSum=0,expectedSum=0;
    int n=6;
    int size = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        actualSum+=arr[i];
    }
    expectedSum=(n*(n+1))/2;
    int missing=expectedSum-actualSum;
    printf("The missing number is %d",missing);

    

}
