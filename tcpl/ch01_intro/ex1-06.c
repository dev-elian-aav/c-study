// Exercsise 1-6. Verify that the expression getchar() != EOF is 0 or 1.
#include <stdio.h>

int main(void)
{
	int c;

	while (c = (getchar() != EOF))
	{
		printf("The value of the expression is %d\n",c);
	}
	
	printf("The value of the expression is %d\n",c);
	return 0;
}
