#include <stdio.h>
#include <stdlib.h>
int main (void){

  float num1,num2;
  float max;

  printf("please enter two number \n");
  scanf("%f %f",&num1,&num2);

  max =num1;

     if (num1==num2)
     {
         printf("The number one : %7.2f is equal number two : %7.2f \n",num1,num2);
     }
     if ( num1!=num2)
     {
         printf("The number one : %7.2f is not equal number two : %7.2f \n",num1,num2);
     }
     if (num2>max)
     {
         max=num2;
     }
     printf("The maximum number is : %7.2f",max);
}
