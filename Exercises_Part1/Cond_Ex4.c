/*
 * ex4.c
 *
 *  Created on: Feb 24, 2023
 *      Author: Eslam adel fathy
#include <stdio.h>
#include <stdlib.h>
int main (void){
	setbuf(stdout,NULL);
	// variable declaration
	char n;
	printf("Please Enter Student Equivalent Grade :\n");
	scanf("%c",&n);
	//process
	switch(n)
	{
	case 'A':
	case 'a':
		printf("Student Grade is Excellent \n");
		break;
	case 'B':
	case 'b':
		printf("Student Grade is very god \n");
		break;
	case 'C':
	case 'c':
		printf("Student Grade is god \n");
		break;
	case 'D':
	case 'd':
		printf("Student Grade is pass \n");
		break;
	case 'F':
	case 'f':
		printf("Student Grade is fail \n");
		break;
    default  :
                 printf("Invalid grade\n");
	}
	return 0;
}*/
