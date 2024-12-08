#include <stdio.h> /* Read the functions defined inside the standard input/output library */

int main(void) /* Define the integer function main which expects no arguments */
{
	float celsius, fahr; /* Declare two float variables: celsius and fahr */
	int lower, step, upper; /* Declare three int variables: lower, step and upper */
	char *c = "C°"; /* D&I a char pointer: *f */
	char *f = "F°"; /* D&I a char pointer: *f */

	celsius = lower = 0; /* Initialize celsius and lower to 0 */
	step = 20; /* Initialize step to 20 */
	upper = 300; /* Initialize upper to 300 */

	printf("%4s%6s\n", c, f); /* Tell the function printf to print and format a header */
	while (celsius <= upper) /* A while loop that checks if celsius is lower/equal than upper */
	{
		fahr = (celsius*9.0/5.0)+32; /* Initialize fahr as the formula for celsius to farenheit conversion */
		printf("%3.0f%6.1f\n", celsius, fahr);
		/* Tell the function printf to print and format the values of celsius and fahr */
		celsius += step; /* Sum celsius and step */
	}
	return 0; /* Tell the main function to return 0 (No errors) */
}
