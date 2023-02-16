#include <stdio.h>
#include <stdlib.h>
int main (void){

   //variable declaration
   int n,i,j;

   //read data from user
   printf("enter no. of rows to printed:");
   scanf("%d",&n);

   //logic operator

     for (i=1; i<=n; i++)
     {
         for (j=1; j<=i; j++)
         {
         printf("* ");
         }
         printf("\n");
     }
     return 0;
}
