#include <stdio.h>
#include <stdlib.h>
int main(void){

  float num1,num2;
  char ch;
     printf("Enter an operator (+, -, *, /):\n ");
     printf("enter  the two number :");
     scanf("%f %c %f",&num1,&ch,&num2);

    switch (ch) {

     case '+':
        printf(": %7.2f",num1+num2);
        break;

     case '-':
        printf(": %7.2f",num1-num2);
        break;

     case '*':
        printf(" : %7.2f",num1*num2);
        break;

     case '/':
        printf(": %7.2f",num1/num2);
        break;

     default:
         printf("Error! operator is not correct");

     }
     return 0;
}
