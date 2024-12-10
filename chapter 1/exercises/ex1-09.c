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
