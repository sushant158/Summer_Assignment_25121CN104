#include<stdio.h>
int main(){
    char name[100]="Sushant";
    char temp;
    for (int i = 0; name[i]!='\0'; i++)
    {
        if (name[i]>='A'&& name[i]<='Z')
        {
            name[i]=name[i]+32;

        } 
    }
     for (int i = 0; name[i]!='\0'; i++){
        for (int j = i+1; name[j]!='\0'; j++)
        {
            if (name[i]>name[j])
            {
                temp=name[i];
                name[i]=name[j];
                name[j]=temp;
            }
            
        }
     }
     printf("Name after sorting is %s",name);
    

    
    
}
