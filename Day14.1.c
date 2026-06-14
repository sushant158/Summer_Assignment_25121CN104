#include<stdio.h>
int main(){
    int arr[10]={1,23,3,64,7,6,10,8,9,20},key,flag=0,i;
    printf("Enter the number to be searched");
    scanf("%d",&key);
    for ( i = 0; i <10; i++)
    {
        if(key==arr[i]){
            flag=1;
            break;
        }
    }
    if (flag)
    {
     printf("The element found at position %d", i + 1);
    }
    else{
        printf("The element not found ");
    }
    
    
}
