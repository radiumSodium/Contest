#include<stdio.h>

int main(){

     int Y;
     scanf("%d",&Y);
     if ((Y%4==0)&&(Y%400!=0))
     {
        printf("YES");
     }
     else printf("NO");
     
return 0;
}