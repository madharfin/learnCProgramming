/*
 * name.c
 *
 * We are going to learn input.
 * The script below will ask for an input and save it in a variable.
 * Then print the variable
 *
 */

#include <stdio.h>

int main(){
	/* This is where we create a variable named NAME. 
	 * The "char" at the front of the variable, is used 
	 * to define that the variable is a string */
	char NAME[32];

	/* Then it print this string */
	printf("What is your name: \n");

	/* This one will record the input from keyboard,
	 * then store that to variable NAME */
	scanf("%s", &NAME);

	/* Last, we print a string followed with our variable NAME */
	printf("Hello %s\n", NAME);

	return 0;
}
