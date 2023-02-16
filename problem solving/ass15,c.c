#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void){

int number,sum;
int exp;

   printf("enter number and power :");
   scanf("%d %d",&number,&exp);



   sum=pow(number,exp);
   printf("%d",sum);
}
