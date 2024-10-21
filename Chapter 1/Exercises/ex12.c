#include <stdio.h>
#define YES 1
#define NO 0

int main(void)
{
    int c, in, fchar;

    while((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t')
	{
	    
	    if (fchar == YES && in == YES)
	    {
                fchar = NO;
	    }
	    else if (fchar == NO && in == YES)
	    {
                printf("\n");
	    }
	    in = NO;
	}
	else if ( c == '\n')
	{
	    printf("\n");
            fchar = YES;
	}
	else
	{
	    putchar(c);
	    in = YES;
	}
    }
    return 0;
}
