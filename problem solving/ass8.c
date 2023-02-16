#include <stdio.h>
#include <stdlib.h>
int main(void){


   int num;

     printf("enter positive integer :");
     scanf("%d",&num);


   if (num%4 ==0)
      printf(" number : %d is a perfect square..",num);
   else
      printf("number : %d is not perfect square..",num);
}
