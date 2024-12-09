#include <stdio.h> /* Read the functions defined inside the standard input/output library */

int main(void) /* Define a integer function called main which expects no arguments */
{
	int fahr; /* Declare one integer variable called fahr */
	/* Isn't a float anymore because of type conversion */
	char *f = "F°"; /* D&I one char pointer called *f */
	char *c = "C°"; /* D&I one char pointer called *c */

	printf("%4s%6s\n", f, c);
	/* Tell the printf function to print and format a header with the values of f and c */
	
	for (fahr = 300; fahr >= 0; fahr -= 20) /* Initialize fahr to 300. */
	/* Condition: Check whether fahr is more/equal than/to zero. */
	/* Step: Substract 20 from fahr */
	{
		printf("%3d%6.1f\n", fahr, 5.0/9.0 * fahr - 32);
		/* Tell the printf function to print and format the value of fahr */
		/* Also give it an expression, the farenheit to celsius formula */
		/* to print and format it's value */
	}
	return 0; /* Tell the main function to return 0 (No errors) */
}
