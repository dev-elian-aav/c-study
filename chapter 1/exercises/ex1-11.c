#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

/* count lines, words, and characters in input */
main()
{
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF)
	{
		++nc;
		if (c == '\n')
		{
			++nl;
		}
		if (c == ' ' || c == '\n' || c == '\t')
		{
			state = OUT;
		}
		else if (state == OUT)
		{
			state = IN;
			++nw;
		}
	}
	printf("%d %d %d\n", nl, nw, nc);
}

/* I would test the program with numbers and other escape sequences like \b and \0 */
/* I wouldn't test it by putting a ton of blanks in a row, the program isn't written for pruning input like ex1-09.c */
/* Even if I do that, it wouldn't count a word, since state would be OUT, as it should */
/* If I type \b\b\b \b\b\b\n it would wrongly count two words */
/* Inputing a ton of characters (letters) withouth spaces would only cound as one word */
/* Sending the EOF signal as soon as the program starts would end in a 0 0 0 output, which is correct */
