#include<stdio.h>
#include<string.h>
int main(){
    char str1[100]="abcde";
    char str2[100]="cdeab";
    char temp[100];
    if (strlen(str1)!=strlen(str2))
    {
         printf("Strings are not rotations of each other");
    }
    else{
   
    strcpy(temp,str1);
    strcat(temp,str1);
        if (strstr(temp,str2)!=NULL)
        {
             printf("Strings are rotations of each other");
        }
        else{
             printf("Strings are not rotations of each other");
        }
        
    }
 

}
