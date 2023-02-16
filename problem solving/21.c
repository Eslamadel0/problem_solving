#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void){

float a,b,c;
float s;
float area;

  printf("please side 1 :");
  scanf("%f",&a);
  printf("p;ease side 2 :");
  scanf("%f",&b);
  printf("please side 3 :");
  scanf("%f",&c);

  s=(a+b+c)/2;
  area=sqrt(s*(s-a)*(s-b)*(s-c));

  printf("Area of triangle with side %5.2f ,%5.2f,%5.2f, is equal=%7.2f ",a,b,c,area);
}
