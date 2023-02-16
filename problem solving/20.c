#include<stdio.h>
#include<stdlib.h>
#define PI 3.14
int main(void){

float r;
float area;

  printf("please enter the radius\n");
  scanf("%f",&r);

  area=PI *r*r;

  printf("The Area : %7.2f when radius is :%7.2f",area,r);
}
