#include <stdio.h>
#include <stdlib.h>
int main (void){

   //variable declaration
   int i,j,n;

   //read data from user
   printf("enter number of stars :");
   scanf("%d",&n);

   //logic operator
   for (i=1; i<=n; i++)
   {
       for (j=1; j<=n-i; j++)
       {
           printf(" ");
       }
       for (j=1; j<=i*2-1; j++)
       {
           printf("*");
       }
        printf("\n");
   }


   return 0;
}
