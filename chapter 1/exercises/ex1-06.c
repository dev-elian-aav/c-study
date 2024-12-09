#include <stdio.h> /* Read the functions and symconsts defined inside the standard input/output library */

int main(void) /* Define a integer function which expects no arguments */
{
	int c; /* Declare a integer variable called c */
	while (c = (getchar() != EOF)) /* Condition: getchar() value is not equal to EOF */
	/* This will return a 1, if getchar() != EOF, and a 0, if getchar() == EOF */
	{
		printf("The value of the expression is %d\n",c);
		/* Tell the printf function to print and format the integer value of the expression */
	}
	printf("The value of the expression is %d\n",c);
	/* Tell the printf function to print and format the integer value of the expression */
	return 0; /* Tell the main function to return 0 (No errors) */
}
