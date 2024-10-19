#include <stdio.h>

int main(void)
{
    int c;
    double cb = 0, ct = 0, cn = 0;

    while((c = getchar()) != EOF)
    {
        if(c == '\n')
	{
	    ++cn;
	}
	else if(c == '\t')
	{
	    ++ct;
	}
	else if(c == ' ')
	{
	    ++cb;
	}
    }
    printf("There were %.0f blanks.\nThere were %.0f tabs.\nThere were %.0f newlines.\n", cb, ct, cn);
}
