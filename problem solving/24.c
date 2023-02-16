#include <stdio.h>
#include <stdlib.h>
int main (void){

 int number;
 int max;

    printf(" please number terminated by  0 : ");
    scanf("%d",&number);
    max=number;

    do
    {
    printf(" please number terminated by o : ");
    scanf("%d",&number);
    if (number > max)
       max=number;

    } while (number !=0);

    printf("the maximum number : %d ",max);

    }
