#include <stdio.h>
/* Read the functions and symconstants defined in the standard input/output library */
#define CHAR 'A'
/* Define symconstant CHAR for ease of use */

int main(void)
/* Define a integer function called main which expects no arguments */
{
	int c, pchar;
	/* Declare two integer variables: c and pchar */
	pchar = CHAR;
	/* Initialize pchar with symconstant CHAR */

	while ((c = getchar()) != EOF)
	/* Condition: c, whose value is getchar(), isn't EOF */
	{
		if (c == ' ' && pchar == ' ')
		/* Check c and pchar store a blank */
		{
			pchar = c;
			/* Only store the value of c */
		}
		else
		/* Simplified this part to only a if and an else */
		{
			putchar(c);
			/* Output the value of c with the function putchar() */
			pchar = c;
			/* Store the value of c*/
		}
	}
	return 0;
	/* Tell the main function to return 0 (No errors) */
}
