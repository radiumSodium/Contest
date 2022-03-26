#include<stdio.h>

int main(){

     int n,i,sum,p,v,t,counter=0;
     scanf("%d",&n);
     for ( i = 0; i < 3; i++)
     {
         scanf("%d %d %d",&p,&v,&t);
         sum= p+v+t;
         if (sum>1)
         {
         counter++;
         }
     }
     printf("%d\n",counter);
return 0;
}