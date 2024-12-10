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
	while (fahr <= upper)
	{
		celsius = (5.0/9.0) * (fahr - 32);
		printf("%3.0f%6.1f\n", fahr, celsius);
		fahr += step;
	}
	return 0;
}
