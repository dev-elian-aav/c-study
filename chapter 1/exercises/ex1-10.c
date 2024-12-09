/* Reused code from the exercises folder: ex1-09.c */
#include <stdio.h>
/* Read the functions and symconstants defined in the standard input/output library */

int main(void)
/* Define a integer function called main which expects no arguments */
{
	int c;
	/* Declare two integer variables: c and pchar */

	while ((c = getchar()) != EOF)
	/* Condition: c, whose value is getchar(), isn't EOF */
	{
		if (c == '\t')
		/* Check if c is a tab */
		{
			printf("\\t");
			/* "Replace" it with it's written escape sequence */
		}
		else if (c == '\b')
		/* Check if c is a backspace */
		{
			printf("\\b");
			/* "Replace" it with it's written escape sequence */
		}
		else if (c == '\\')
		/* Check if c is a backslash */
		{
			printf("\\\\");
			/* "Replace" it with it's written escape sequence */
		}
		else
		/* If every previous check returns "false" */
		{
			putchar(c);
			/* Tell the putchar() function to output the value of c */
		}
	}
	return 0;
	/* Tell the main function to return 0 (No errors) */
}
