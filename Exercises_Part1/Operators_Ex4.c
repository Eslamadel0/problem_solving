/*
 * Operators_Ex4.c
 *
 *  Created on: Feb 25, 2023
 *  Author: Eslam adel fathy
 *  Description : Code to demonstrate the capability of the Compiler optimization with Logical operators

#include <stdio.h>
#include <stdlib.h>
int main (void){

	setbuf (stdout,NULL);
	// variable declaration
	int a=30;
	int x=10;
	// process
	if (a>=30||x++)
	{
		printf("First Condition x = %d\n",x);
	}
	if (a>=40||x++)
	{
		printf("Second Condition x = %d\n",x);
	}
	if (a>=40&&x++)
	{
		printf("third Condition x = %d\n",x);
	}
	if (a>=30&&x++)
	{
		printf("Forth Condition x = %d\n",x);
	}
   return 0;
}
*/
