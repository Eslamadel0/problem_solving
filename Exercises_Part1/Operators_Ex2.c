/*
 * Operators_Ex2.c
 *
 *  Created on: Feb 25, 2023
 *      Author: Eslam adel fathy
 Description : Code to demonstrate the capability of the Equality and Relational operators

#include <stdio.h>
#include <stdlib.h>
int main (void){

	setbuf (stdout,NULL);
	// variable declaration
	int num1,num2;
	printf("enter two numbers :\n");
	scanf("%d %d",&num1,&num2);
    // process
	if(num1==num2)
	{
		printf("%d is equal %d \n",num1,num2);
	}
	if(num1!=num2)
	{
		printf("%d is not equal %d \n",num1,num2);
	}
	if(num1>num2)
	{
		printf("%d is greater than %d \n",num1,num2);
	}
	if(num1<num2)
	{
		printf("%d is less than %d \n",num1,num2);
	}
	if(num1>=num2)
	{
		printf("%d is greater or equal than %d \n",num1,num2);
	}
	if(num1<=num2)
	{
		printf("%d is less or equal than %d \n",num1,num2);
	}

	return 0;
}
*/
