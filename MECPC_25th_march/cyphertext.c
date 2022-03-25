#include<stdio.h>
#include<string.h>

int main(){

     char s[50], r[50];
     int i , length;
     scanf("%s",&s);
    
     length = strlen(s);
     for ( i = 0; i < length; i++)
     {
         s[i]=s[i]+('e'-'a');
     }
     printf("%s",s);
     


return 0;
}