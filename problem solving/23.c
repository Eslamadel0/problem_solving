#include<stdio.h>
#include<stdlib.h>
int main(void){

int num1,num2,num3;
int max;
printf("enter 3 number :");
scanf("%d %d %d ",&num1,&num2,&num3);
max=num1;
  if (num2>max)
  {
      max=num2;
  }
  if (num3>max)
    {
        max=num3;
    }
  printf(" maximum %d",max);
}
