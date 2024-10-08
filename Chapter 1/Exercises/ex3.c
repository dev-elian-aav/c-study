#include <stdio.h>
#define MINTEMP 0
#define STEP 20
#define MAXTEMP 300

int main(void)
{
    double fahr = MINTEMP, celsius;
    
    printf(" F°   C°\n");
    while (fahr <= MAXTEMP)
    {
        printf("%3.0f%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
	fahr += STEP;
    }
    return 0;
}
