#include<stdio.h>
int main(){
    int arr[10]={1,23,3,64,7,6,10,10,1,20},i;
    int largest=arr[0];
    int secondLargest=arr[0];
    for ( i = 1; i <10; i++)
    {
        if(arr[i]>largest){
            secondLargest=largest;
            largest=arr[i];
      
        }
        else if (arr[i]>secondLargest && arr[i]!=largest)
        {
            secondLargest =arr[i];
        }
        
    }
    printf("The largest element = %d and the second largest element=%d",largest,secondLargest);

    
    
}
