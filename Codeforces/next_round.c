#include<stdio.h>

int main(){

     int k,i,n,a[50],counter=0;
     scanf("%d %d",&n,&k);
     for ( i = 0; i < n; i++)
     {
         scanf("%d",&a[i]);
     }
     for ( i = 0; i < n; i++)
     {
         if(a[i]>=a[k-1] && a[i]>0){
             counter++;
         }
     }
     
     printf("%d\n",counter);

return 0;
}