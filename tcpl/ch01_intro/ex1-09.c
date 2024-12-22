// Exercise 1-9. Write a program to copy its input to its output,
// replacing each string of one or more blanks by a single blank.
#include <stdio.h>
#define CHAR 'A'

int main(void)
{
	int c, pchar;

	pchar = CHAR;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ' && pchar == ' ')
		{
			pchar = c;
		}
		else
		{
			putchar(c);
			pchar = c;
		}
	}

	return 0;
}
