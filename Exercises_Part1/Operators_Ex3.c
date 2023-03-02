/*
 * Operators_Ex3.c
 *
 *  Created on: Feb 25, 2023
 *      Author: Eslam adel fathy
 *      Description : Code to demonstrate the capability of the Logical operators

#include <stdio.h>
#include <stdlib.h>
int main (void){

	setbuf (stdout,NULL);
	// variable declaration
	int a=30;
	int b=40;

	//process
	if(a>=40||b>=40)
	{
		printf("Or If Block Gets Executed\n");
	}
	if(a>=40&&b>=40)
	{
		printf("AND If Block Gets Executed\n");
	}
	if (!(a>=40))
	{
		printf("NOT If Block Gets Executed\n");
	}

	return 0;
}
*/
