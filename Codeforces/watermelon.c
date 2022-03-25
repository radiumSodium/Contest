#include<stdio.h>

int main(){

     int w=0;
     printf("Enter the value of w:");
     scanf("%d", &w);

     if (w==2)
     {
         printf("NO");
     }
     else if( w%2==0){
         printf("YES");
     }
     else printf("NO");
     

return 0;
}