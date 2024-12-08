#include <stdio.h> /* Read the functions defined in the standard input/output library */

int main(void) /* Define an integer function that expects no arguments */
{
	printf("Hello, World\n"); /* Call printf (print formatted) function from the stdio.h library */
	/* Give it the character string "Hello, World\n" */

	/* printf("Hello, World\n); */
	/* Leave out a double quote. Error: missing terminating " character */

	/* printf("Hello, World\n"; */
	/* Leave out a closing parenthesis. Error: expected ‘)’ before ‘;’ token */

	/* rintf("Hello, World\n"); */
	/* Leave out the p of printf, miscalling the function. Note: include ‘<math.h>’ or provide a declaration of ‘rintf’ */
	return 0; /* Tell the main function to return 0 (No errors) */
}
