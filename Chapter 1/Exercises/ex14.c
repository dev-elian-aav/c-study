#include <stdio.h>

int main(void)
{
	int c, blanks, chars, numbers, i;

	while((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\t' || c == '\n')
		{
			++blanks;
		}
		else if (c >= '0' && c <= '9')
		{
			++numbers;
		}
		else
		{
			++chars;
		}
	}
	printf("Blanks %d, Chars %d, Numbers %d\n", blanks, chars, numbers);

	for(i = 0; i <= blanks; ++i)
	{
		if (i == 1)
		{
			if(i == blanks)
			{
				printf("[\n");
			}
			else
			{
				printf("[");
			}
		}
		else if (i > 1 && i < blanks)
		{
			printf("=");
		}
		else if (i == blanks)
		{
			printf("]\n");
		}
	}
	for(i = 0; i <= chars; ++i)
	{
		if (i == 1)
		{
			if(i == chars)
			{
				printf("[\n");
			}
			else
			{
				printf("[");
			}
		}
		else if (i > 1 && i < chars)
		{
			printf("=");
		}
		else if (i == chars)
		{
			printf("]\n");
		}
	}
	for(i = 0; i <= numbers; ++i)
	{
		if (i == 1)
		{
			if(i == numbers)
			{
				printf("[\n");
			}
			else
			{
				printf("[");
			}
		}
		else if (i > 1 && i < numbers)
		{
			printf("=");
		}
		else if (i == numbers)
		{
			printf("]\n");
		}
	}
}
