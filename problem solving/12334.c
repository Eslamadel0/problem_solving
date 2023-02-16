/*
 ============================================================================
 Name        : c.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float temp;

	puts("enter tempruter  :\n");
	scanf("%7.1f",&temp);

	temp=(temp-32.0)*5.0/10.0;

	printf("the temp = %7.1f",temp);
	return EXIT_SUCCESS;
}

