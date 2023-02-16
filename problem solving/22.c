#include<stdio.h>
#include<stdlib.h>
int main(void){

    int number ;
    printf("enter integer number :");
    scanf("%d",&number);

    printf("your number is %d %s \n",number,((number%2)==0? "even":"odd"));

}
