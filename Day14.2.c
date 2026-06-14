#include<stdio.h>
int main(){
    int arr[10]={1,23,3,64,7,6,10,10,1,20},key,count=0,i;
    printf("Enter the number to be searched");
    scanf("%d",&key);
    for ( i = 0; i <10; i++)
    {
        if(key==arr[i]){
            count++;
        }
    }
    if (count)
    {
     printf("The frequency of the number %d is = %d",key,count);
    }
    else{
        printf("The number not found ");
    }
    
    
}
