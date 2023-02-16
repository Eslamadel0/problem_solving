#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
int main (void){

  float radius;
  float area;

    printf("please enter the radius of a circle \n");
    scanf("%f",&radius);

    area =PI *radius*radius;

    printf("The Area Of Circle is :%7.2f when radius is :%7.2f",area,radius);

}
