#include <stdio.h> /* Read the functions defined inside the standard input/output library */

int main(void) /* Define a integer function called main, which expects no arguments */
{
	float fahr, celsius; /* Declare two float variables */
	int lower, step, upper; /* Declare three integer variables */
	char *f = "F°"; /* D&I a char pointer */
	char *c = "C°"; /* D&I a char pointer */

	fahr = lower = 0; /* Initialize fahr and lower to 0 */
	step = 20; /* Initialize step to 20 */
	upper = 300; /* Initialize upper to 300 */

	printf("%4s%6s\n", f, c); /* Tell the printf function to print and format a the values of f and c */
	while (fahr <= upper) /* A while loop that checks if the value of fahr is lower or equal than upper */
	{
		celsius = (5.0/9.0)*(fahr-32); /* Initialize celsius to be the farenheit to celsius formula */
		printf("%3.0f%6.1f\n", fahr, celsius);
		/* Tell the printf function to print and format the values of fahr and celsius */
		fahr += step; /* Sum the value of fahr plus step */
	}
	return 0; /* Tell the main function to return 0 (No errors) */
}
