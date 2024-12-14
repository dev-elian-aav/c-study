#include <stdio.h>
#include <stdbool.h>
#define CHAR 'a' 

int main(void)
{
	int i, c, pchar;
	char newLiners[4] = { ' ', '\t', '\b', '\0' };
	bool inWord;

	pchar = CHAR;
	inWord = false;

	while ((c = getchar()) != EOF)
	{
		if (inWord == false)
		{
			for (i = 0; i <= 3; ++i)
			{
				if (c == newLiners[i] && pchar != newLiners[i])
				{
					putchar('\n');
					pchar = c;
				}
				else if (c == newLiners[i] && pchar == newLiners[i])
				{
					printf("");
					pchar = c;
				}
			}

			printf("");
			pchar = c;
		}
		else if (inWord == true)
		{
			putchar(c);
		}
	}

	return 0;
}
