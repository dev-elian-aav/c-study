#include <stdio.h>

int main(void)
{
	int nl;

	for (nl = 0; (getchar() == '\n'); ++nl)
	{
		;
	}

	printf("There were %d lines\n", nl);
	return 0;
}
