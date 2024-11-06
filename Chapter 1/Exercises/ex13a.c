#include <stdio.h>
#define IN 1
#define OUT 0
#define PROGRAMEND 10

int main(void)
{
	int c, i, j, wlength[PROGRAMEND], insword;

	for (i = 0; i < PROGRAMEND; ++i)
	{
		wlength[i] = 0;
	}
	for (i = 0; i < PROGRAMEND; ++i)
	{
		while ((c = getchar()) != '\n')
		{
			if (c == ' ' || c == '\t' || c >= '0' && c <= '9')
			{
				insword = OUT;
			}
			else
			{
			insword = IN;
			++wlength[i];
			}
		}
	}

	printf("Histogram\n");
	for (i = 0; i < PROGRAMEND; ++i)
	{
		for (j = 0; j <= wlength[i]; ++j)
		{
			if (j == 1)
			{
				if(j == wlength[i])
				{
					printf("[\n");
				}
				else
				{
					printf("[");
				}
			}
			else if (j > 1 && j < wlength[i])
			{
				printf("=");
			}
			else if (j == wlength[i])
			{
				printf("]\n");
			}

		}
	}
}
