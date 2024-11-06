#include <stdio.h>
#define CHARTYPES 3

int main(void)
{
	int c, i, j, chartypes[CHARTYPES], charadd;

	for (i = 0; i < CHARTYPES; ++i)
	{
		chartypes[i] = 0;
	}

	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\t' || c == '\n')
		{
			chartypes[0] = ++charadd;
		}
		else if (c >= '0' && c <= '9')
		{
			chartypes[1] = ++charadd; 
		}
		else
		{
			chartypes[2] = ++charadd;
		}
	}

	for (i = 0; i < CHARTYPES; ++i)
	{
		for (j = 0; j < chartypes[i]; ++j )
		{
			printf("*");
		}
		printf("\n");
	}
}
