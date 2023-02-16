#include <stdio.h>
#include <stdlib.h>
int main (void){

  float num1,num2,num3;
  float min;

     printf("enter three integers \n");
     scanf("%f %f %f",&num1,&num2,&num3);

     min=num1;

     if (num2<min)
     {
         min=num2;
     }
     if (num3<min)
     {
         min=num3;
     }
     printf(" the smallest number : %7.2f",min);
}
