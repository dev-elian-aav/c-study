#include <stdio.h> /* Read functions from the standard input/output library */

int main(void) /* Define an integer function that expects no arguments*/
{
	printf("Hello, World\a");
	/* The escape sequence \a means bell/beep, couldn't make it work in my pc */
	printf("Hello, World\b");
	/* The escape sequence \b means backspace */
	printf("Hello, World\c");
	/* The escape sequence \c is unknown */
	printf("Hello, World\d");
	/* The escape sequence \d is unknown */
	printf("Hello, World\e");
	/* The escape sequence \e means escape character */
	printf("Hello, World\f");
	/* The escape sequence \f means formfeed page break */
	printf("Hello, World\g");
	/* The escape sequence \g is unknown */
	printf("Hello, World\h");
	/* The escape sequence \h is unknown */
	printf("Hello, World\i");
	/* The escape sequence \i is unknown */
	printf("Hello, World\j");
	/* The escape sequence \j is unknown */
	printf("Hello, World\k");
	/* The escape sequence \k is unknown */
	printf("Hello, World\l");
	/* The escape sequence \l is unknown */
	printf("Hello, World\m");
	/* The escape sequence \m is unknown */
	printf("Hello, World\n");
	/* The escape sequence \n means newline */
	printf("Hello, World\o");
	/* The escape sequence \o is unknown */
	printf("Hello, World\p");
	/* The escape sequence \p is unknown */
	printf("Hello, World\q");
	/* The escape sequence \q is unknown */
	printf("Hello, World\r");
	/* The escape sequence \r means carriage return, go to the start of the prompt */
	printf("Hello, World\s");
	/* The escape sequence \s is unknown */
	printf("Hello, World\t");
	/* The escape sequence \t means tab */	
	printf("Hello, World\u");
	/* The escape sequence \u is for unicode character codes below 10000 hexadecimal */
	printf("Hello, World\v");
	/* The escape sequence \v means vertical tab */
	printf("Hello, World\w");
	/* The escape sequence \w is unknown */
	printf("Hello, World\x");
	/* The escape sequence \x is for calling a byte in hexadecimal form */
	printf("Hello, World\y");
	/* The escape sequence \y is unknown */
	printf("Hello, World\z");
	/* The escape sequence \z is unknown */
}
