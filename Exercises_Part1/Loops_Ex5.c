/*
 * ex9.c
 *
 *  Created on: Feb 25, 2023
 *      Author: Eslam adel fathy
 *
#include <stdio.h>
#include <stdlib.h>
int main (void){
	setbuf(stdout,NULL);
	// variable declaration
	int i,n;
	unsigned long factorial=1;
	printf("enter the number you want to calculate the factorial:\n");
	scanf("%d",&n);
	//process
	for(i=1; i<=n; i++)
	{
		factorial*=i;
	}
	printf("the factorial is = %u \n",factorial);
} */
