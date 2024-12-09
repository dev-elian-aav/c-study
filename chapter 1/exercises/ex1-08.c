/* Reusing code from the testing folder: linecount_for_version.c */
#include <stdio.h>
/* Read the functions and symconstants defined inside the standard input/output library */

int main(void)
/* Define a integer function called main which expects no arguments */
{
	int c, nc, nl, nb, nt;
	/* Declare four integer variables: c, nc, nl, nt and nb */

	for (nc = nl = nt = nb = 0; (c = getchar()) != EOF; ++nc)
	/* Initialize nc for controling how many new characters, also initialize the other three new * variables */
	/* Condition: Check if getchar() isn't equal to EOF */
	/* Step: If true add 1 to nc variable */
	/* As getchar() read one character at a time, always add 1 to nc varible */
	{
		if (c == '\n')
		/* Check if getchar() is equal to newline escape sequence */
		{
			++nl;
			/* If true add 1 to nl */
		}
		else if (c == '\t')
		/* Check if getchar() is equal to tab escape sequence */
		{
			++nt;
			/* If true add 1 to nt */
		}
		else if (c == ' ')
		/* Check if getchar() is equal to blank */
		{
			++nb;
			/* If true add 1 to nb */
		}
	}
	printf("There were %d characters\n", nc);
	printf("Of those %d characters: %d were lines, %d were tabs and %d were blanks\n", nc, nl, nt, nb);
	printf("The remaining %d are a unknow mix of characters\n", nc - (nl+nt+nb));
	/* Tell the printf function to print and format how many characters and character types there were */
	/* Also give it an expression that substracts new lines, tabs and blanks from the overall characters */
	return 0;
	/* Tell the main function to return 0 (No errors) */
}
