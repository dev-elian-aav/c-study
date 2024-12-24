// Exercise 1-13. Write a program to print a histogram of the
// lengths of words in its input. It is easy to draw the histogram
// with the bars horizontal; a vertical orientation is more challenging.
#include <stdio.h>
#include <stdbool.h>

#define MWORDS 5

int main(void)
{
	int i, j, c;
	int wlength[MWORDS];
	bool inword = false;

	j = 0;

	for (i = 0; i < MWORDS; ++i)
	{
		wlength[i] = 0;
	}


	while (j < MWORDS && (c = getchar()) != EOF)
	{
		if (inword == false)
		{
			if (c == ' ' || c == '\t' || c == '\n')
			{
				inword = false;
			}
			// Won't accept "words" made up of blanks, tabs and newlines.
			else
			{
				++wlength[j];
				inword = true;

			}
		}
		else if (inword == true)
		{

			if (c == '\n' || c == ' ' || c == '\t')
			{
				++j;
				inword = false;
			}
			else
			{
				++wlength[j];
			}
		}
	}
	
	printf("\nWord Length Histogram (Horizontal)\n");
	for (i = 0; i < MWORDS; ++i)
	{
		for (j = 0; j < wlength[i]; ++j)
		{ 
			if (j == 0 && wlength[i] > 1)
			{
				printf("[");
			}
			else if (j == (wlength[i] - 1) || wlength[i] == 1)
			{
				printf("]");
			}
			else
			{
				printf("=");
			}
		}
		printf("\n");
	}

	return 0;
}
