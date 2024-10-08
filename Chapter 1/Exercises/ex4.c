#include <stdio.h>
#define MINTEMP 0
#define STEP 20
#define MAXTEMP 300

int main(void)
{
    double celsius = MINTEMP, farh;

    printf(" C°   F°\n");
    while (celsius <= MAXTEMP)
    {
        printf("%3.0f%6.1f\n", celsius, (celsius * 9.0/5.0) + 32);
	celsius += STEP;
    }
    return 0;
}
