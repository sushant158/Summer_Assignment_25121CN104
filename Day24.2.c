#include<stdio.h>
int main(){
    char str[100]="HHEELLLLOOOO";
    char compstr[100];
    int i,j=0,count;
   for (i = 0; str[i] != '\0'; i++)
    {
        count=1;
        while (str[i]==str[i+1])
        {
            count++;
            i++;
        }
        compstr[j++]=str[i];
        if (count>1)
        {
            compstr[j++]=count+'0';
        }
        
        
    }

    compstr[j] = '\0';

    printf("Compressed string is %s", compstr);
    

}
