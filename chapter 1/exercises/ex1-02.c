#include <stdio.h>
int main(void)
{
	int i;
	char escapeSequence[12] = {
		'\a', '\b', '\f',
		'\n', '\r', '\t',
		'\v', '\0', '\?',
		'\'', '\"', '\\',
	};

	for (i = 0; i <= 12; ++i)
	{
		printf("Testing posible escape sequences %c", escapeSequence[i]);
	}
	printf("Tested!\n");
	return 0;
}
