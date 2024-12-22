// Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.
#include <stdio.h>

int main(void)
{
	float celsius, fahr;
	int lower, step, upper;
	char *c = "C°";
	char *f = "F°";

	celsius = lower = 0;
	step = 20;
	upper = 300;

	printf("%4s%6s\n", c, f);

	while (celsius <= upper)
	{
		fahr = (celsius * 9.0/5.0) + 32;
		printf("%3.0f%6.1f\n", celsius, fahr);
		celsius += step;
	}
	
	return 0;
}
