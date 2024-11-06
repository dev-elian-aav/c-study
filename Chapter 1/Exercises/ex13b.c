#include <stdio.h>
#define PROGEND 5

int main(void)
{
	int c, i, j, sv, hsv, wc = 0;
	int wl[PROGEND];

	for (i = 0; i < PROGEND; ++i)
	{
		wl[i] = 0;
	}

	while (wc < PROGEND)
	{
		c = getchar();
		if (c == '\n')
		{
			++wc;
		}
		else
		{
		++wl[wc];
		}
	}
	
	for (i = 0; i < PROGEND; ++i)
	{
		sv = wl[i];
		if (sv > hsv)
		{
			hsv = sv;
		}
	}
	int hs = hsv * wc;

	for (i = 0; i < hs; ++i)
	{
		for (j = 0; j < PROGEND; ++j)
			{
				int phsv = hsv;
				if (wl[j] < hsv)
				{
					putchar(' ');
				}
				else if (wl[j] < hsv && i == PROGEND - 1)
				{
					putchar(' ');
				}
				else if (wl[j] == hsv)
				{
					putchar('*');
				}
				else if (wl[j] < phsv)
				{
					putchar(' ');
				}
				printf("\n");
		}
	}
}
