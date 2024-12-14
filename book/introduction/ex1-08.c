#include <stdio.h>

int main(void)
{
	int c, nc, nl, nb, nt;

	for (nc = nl = nt = nb = 0; (c = getchar()) != EOF; ++nc)
	{
		if (c == '\n')
		{
			++nl;
		}
		else if (c == '\t')
		{
			++nt;
		}
		else if (c == ' ')
		{
			++nb;
		}
	}
	
	printf("There were %d characters\n", nc);
	printf("Of those %d characters: %d were lines, %d were tabs and %d were blanks\n", nc, nl, nt, nb);
	printf("The remaining %d are a unknow mix of characters\n", nc - (nl + nt + nb));
	return 0;
}
