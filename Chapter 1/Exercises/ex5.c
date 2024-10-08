#include <stdio.h>
#define MAXTEMP 300
#define CHANGE 20
#define MINTEMP 0

int main(void)
{
    int fahr; /* We don't need to have fahr as a float, since printf can change it's type */
    for(fahr = MAXTEMP; fahr >= MINTEMP; fahr -= CHANGE)
    {
        printf("%3d%6.1f\n",fahr ,(5.0/9.0) * (fahr - 32));
    }
    return 0;
}
