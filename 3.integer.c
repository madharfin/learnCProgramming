/*
 * You'll learn about integer and simple math operation.
 * This program is a simple calculator with only addition
 * operation
 */
#include <stdio.h>

int main()
{
	/* 
	 * We can create variable as many as you want
	 * by seperating the variable with comma (,).
	 *
	 * "int" mean the variable is integer
	 */
	int x, y, answer; /* With this, I created 3 variables */

	/*
	 * The variables is not yet have any value,
	 * with scanf you can create a prompt for input.
	 * Then set the format as integer by specifying "%d".
	 */
	printf("Welcome to addition calculator\n====\n");
	printf("Enter a number: ");
	scanf("%d", &x);
	
	/*
	 * This one is the same, but now its for variable y
	 */
	printf("Enter another number: ");
	scanf("%d", &y);
	
	/*
	 * Now we create simple addition operation using
	 * two variables we created before. The addition
	 * result will be saved in answer variable
	 */
	answer = x + y;
	printf("The answer is %d\n", answer);

	return 0;
}
