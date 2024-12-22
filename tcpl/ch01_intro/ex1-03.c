// Exercise 1-3. Modify the temperature conversion program to print a heading above the table.
#include <stdio.h>

int main(void)
{
	float fahr, celsius;
	int lower, step, upper;
	char *f = "F°";
	char *c = "C°";

	fahr = lower = 0;
	step = 20;
	upper = 300;

	printf("%4s%6s\n", f, c);
	// Used char pointers to format the output
	// maybe it can be done without them

	while (fahr <= upper)
	{
		celsius = (5.0/9.0) * (fahr - 32);
		printf("%3.0f%6.1f\n", fahr, celsius);
		fahr += step;
	}

	return 0;
}
