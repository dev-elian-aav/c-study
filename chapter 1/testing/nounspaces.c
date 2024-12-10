#include <stdio.h>
#include <stdbool.h>

#define STRTCHAR 'a'

int main(void)
{
	int c, pchar;
	bool inWord;
	
	int noDupChars[2] = { '\t', ' ' };
	pchar = STRTCHAR;
	inWord = false;

	while ((c = getchar()) != EOF)
	{
		if (inWord == false)
		{
			if (c == noDupChars[0] || c == noDupChars[1])
			{
				pchar = c;
			}
			else
			{
				putchar(c);
				pchar = c;
			}
		}
		else if (inWord == true)
		{
			if (c == noDupChars[1] && (pchar == noDupChars[1] || pchar == noDupChars[0]))
			{
				pchar = c;
				inWord = false;
			}
			else if (c == noDupChars[0])
			{
				if (pchar != noDupChars[0] && pchar != noDupChars[1])
				{
					putchar(' ');
					pchar = ' ';
					inWord = false;
				}
				else
				{
					pchar = c;
					inWord = false;
				}
			}
			else
			{
				putchar(c);
				pchar = c;
			}
		}
	}
	return 0;
}
