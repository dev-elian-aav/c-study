# Chapter 1 - A Tutorial Introduction

## 1.1 Getting Started

* The C Program to print "hello, world":
```
#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
    return 0;
}
```
* You can compile it with make instead: ```make hello```
* Then you can open it with: ```./hello```
* Every C program has to have a ```main``` function.
* ```<studio.h>``` is the standard I/O library, from where the function printf comes.
* ```(void)``` means that the function expects no arguments.
* ```printf("hello, world\n");``` is a statement.

## 1.2 Variables and Arithmetic Expressions

```
#include <stdio.h>

int main(void)
{
    int fahr, celsius; /* fahr and celsius are initialized as integers */
    int lower, upper, step; /* The same for lower, upper and step */

    lower = 0; /* Minimum Temperature */
    upper = 300; /* Maximum Temperature */
    step = 20; /* Rate of Increase */

    fahr = lower;
    while (fahr <= upper) /* While fahr is less or equal than upper*/
    {
        celsius = 5 * (fahr - 32) / 9; /* Calculate the value of celsius */
	printf("%d\t%d\n", fahr, celsius); /* Print the values of fahr and celsius */
	fahr = fahr + step; /* Increase fahr by stablished rate (20) */
    }
}
```

