// Exercise 1-12. Write a program that prints its input one word per line.
#include <stdio.h>
#define CHAR 'a'
#define YES 1
#define NO 0

int main(void)
{
	int i, c, pchar, inword;
	pchar = CHAR;
	inword = NO;

	while ((c = getchar()) != EOF)
	{
		if (inword == NO)
		{
			if (c == ' ' || c == '\t' || c == '\n')
			{
				inword = NO;
				// If the first character is a blank or tab 
				// it gets ignored, doesn't matter how much of them
				// you input. Newlines won't cause
				// an early "inword = YES" that could cause
				// unexpected behaviour.
			}
			else
			{
				putchar(c);
				inword = YES;
				// Everything else gets printed.
				// TODO: Make sure only letters get printed.
			}
		}
		else if (inword == YES)
		{
			if (c == ' ' || c == '\t' || c == '\n')
			{
				putchar('\n');
				inword = NO;
				// If we were in a word, replace a blank or tab
				// for a newline. Also checking for newlines 
				// to reset the value of inword back to NO.
			}
			else
			{
				putchar(c);
				// Everything else gets printed.
				// TODO: Make sure only letters get printed.
			}
		}
	}

	return 0;
}
