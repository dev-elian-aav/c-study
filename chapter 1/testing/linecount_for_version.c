#include <stdio.h>
/* Read the functions and symconstants defined inside the standard input/output library */

int main(void)
/* Define a integer function called main which expects no arguments */
{
	int nl;
	/* Declare two integer variables: c and nl */

	for (nl = 0; (getchar() == '\n'); ++nl)
	/* Initialize nl for controling how many new lines */
	/* Condition: Check if getchar() was equal to newline escape sequence */
	/* Step: If true add 1 to nl variable */
	/* As getchar() read one character at a time, it will fail as soon as it sees anything that isn't a '\n' */
	{
		;
		/* null statement, there is nothing to do inside the loop */
	}
	printf("There were %d lines\n", nl);
	/* Tell the printf function to print and format how many lines there were */
	return 0;
	/* Tell the main function to return 0 (No errors) */
}
