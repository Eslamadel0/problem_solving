#include <stdio.h>
#include <stdlib.h>
int main(void){

  // variable declaration
   int n,p;

  //read data from user
   printf("enter the number :");
   scanf("%d",&n);

  //logic operator
     while (n>0)
     {
         p=n%10;
         printf("%d",p);
         n/=10;
     }
     return 0;
}
