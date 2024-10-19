#include <stdio.h>
#define PREVCHAR 'a'

int main(void)
{
    int c, prevc = PREVCHAR; /* c for the input, prevc to store the previous input */
    
    while ((c = getchar()) != EOF) /* Meanwhile getchar() is not EOF */
    {
	if(c == ' ' && prevc == ' ') /* If current char is a blank and previous char is a blank */
	{
	    printf(""); /* print nothing */
	}
	else /* Else output inputed character and assign it to prevc*/
	{
        putchar(c);
	prevc = c;
	}
    }
}
