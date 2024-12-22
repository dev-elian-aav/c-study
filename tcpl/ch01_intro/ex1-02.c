// Exercise 1-2. Experiment to find out what happens when prints's
// argument string contains \c, where c is some character not listed above.
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
	// Escape sequences like \u, \U and \x have been left out
	// for obvious reasons

	for (i = 0; i <= 12; ++i)
	{
		printf("Testing the escape sequences %c", escapeSequence[i]);
		// TODO: Redo the exercise to better show what each escape
		// sequence does
	}

	printf("Tested!\n");
	return 0;
}
