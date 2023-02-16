#include <stdio.h>
#include <stdlib.h>
int main (void){

  float temp;
  float f;

     printf("please enter temperature \n ");
     scanf("%f",&temp);

  f=temp *(9/5)+32;

     printf("the temperature  is equal in Fahrenheit :%7.2f",f);

}
