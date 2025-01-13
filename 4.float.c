/*
 * In this little code, you will learn how to use
 * float in C by creating a simple math operation
 * involving float number.
 */

#include <stdio.h>

int main()
{
	/*
	 * Just like our two previous code, we define variables
	 * here. You can make as many as you want.
	 */

	float pi, r, answer; /* Three variables created */

	/*
	 * The code will ask for input, the input will then
	 * be formatted to float by "%f" and saved to r variable.
	 */
	printf("Let me calculate the circle area for you\n");
	printf("What is the 'r' in cm?: ");
	scanf("%f", &r);

	/*
	 * for pi variable, we wont ask input.
	 */
	pi = 3.14;

	/*
	 * This is the math operation
	 */
	answer = r * r * pi;

	printf("The circle area is: %f\n", answer);
}
