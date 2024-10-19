#include <stdio.h>

int main(void)
{
    int c;

    while(c = (getchar() != EOF))
    {
        printf("%d\n", c); /* Returns 1 when a standard char is input */
    }
    printf("%d\n", c); /* Returns 0 when it receives the EOF signal */
}
