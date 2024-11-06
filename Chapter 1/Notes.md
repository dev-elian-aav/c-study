# Chapter 1 - A Tutorial Introduction
## 1.1 Getting Started
* The C Program to print "hello, world":
```
#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
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
* ```lower = 0``` is a assignment statement.
* ```while (expression) {statements}```: Condition is tested, if true, execute the statements between the curly braces, if not, continue with the statemens following it.
* Integer division truncates, so 5/9 would operate as 0 instead of 0,555555556.
```
#include <stdio.h>

int main(void)
{
    float fahr, celsius; /* These variables are converted into floats to enable decimals */
    int lower, upper, step; /* I consider unnecesary to turn these variables into floats */

    lower = 0; /* These values stay the same */
    step = 20;
    upper = 300;

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr-32.0); /* Can use fractions normally thanks to the float type */
	printf("%3.0f%6.1f\n", fahr, celsius); /* Now we have to change from %d (integer) to %f (float) */
	fahr = fahr + step;
    }
}
```
* ```%.1f```: Means only one number after the decimal point.
## 1.3 The for statement
```
#include <stdio.h>

int main(void)
{
    int fahr;

    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
    {
        printf("%3d%6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    }
}
```
* ```for(initialization;expression;change;){statements}```: The varible it's initialized, then tested against an expression, then executes the statements, and applies the change(increment or decrement).
* Rule: _"In any context where it is permissible to use the value of some type, you can use a more complicated expression of that type"_
* It's better to use ```for``` when you know how many times the action has to be iterated. [[Source]](https://builtin.com/software-engineering-perspectives/for-loop-vs-while-loop)
## 1.4 Symbolic constants
* Magic numbers, the act of putting "random" numbers, is a bad practice.
```
#include <stdio.h>
#define LOWER 0 /* random values get replaced by symbolic constants */
#define UPPER 300
#define STEP 20

int main(void)
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    {
        printf("%3d%6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    }
}

```
## 1.5 Character Input and Output
* Text stream: Sequence of characters divided into lines.
* ```getchar()```: Reads input for a character.
* ```putchar()```: Outputs one character.
### 1.5.1 File Copying
```
#include <stdio.h>

int main(void)
{
    int c;

    c = getchar();
    while (c != EOF)
    {
        putchar(c);
	c = getchar();
    }
}
```
* ```!=```: Not equal.
* ```==```: Equal.
* ```||```: A or B.
* ```&&```: A and B.
* Characters like "A", are just stored as bit patterns.
* ```int``` is used instead of ```char``` because the latter can't hold the value of ```EOF```.
* ```EOF``` is defined inside the standar input/output library.
* Assignments (=) can be part of bigger expression.
```
#include <stdio.h>

int main(void)
{
    int c;

    while ((c = getchar()) != EOF) /* The assignment is inside of the while */
    {
        putchar(c);
    }
}
```
* ```!=``` has higher precendence than ```=```.
### 1.5.2 Character Counting
```
#include <stdio.h>

int main(void)
{
    long nc;

    nc = 0;
    while (getchar() != EOF)
    {
        ++nc;
    }
    printf("%ld\n", nc);
}
```
* ```++```: increase by one.
* ```--```: decrease by one.
* These can be suffix ```nc++``` or prefix ```++nc```, these differences are explained in Chapter 2.
```
#include <stdio.h>

int main(void)
{
    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
}
* The lonely semicolon inside the for is called a null statement.
### 1.5.3 Line Counting
```
#include <stdio.h>

int main(void)
{
    int c, nl;

    nl = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
	{
	    ++nl;
	}
    }
    printf("%d\n", nl);
}
```
* The ```if``` checks if c is equal to a newline signal. Remember that in the following programs there are always more newlines than any other characters.
* A character written between single quotes represents a integer value.
### 1.5.4 Word Counting
```
#include <stdio.h>
#define IN 1
#define OUT 0

int main(void)
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;   
    while ((c = getchar()) != EOF)
   {
       ++nc;
       if (c == '\n')
       {
           ++nl;
       }
       if (c == ' ' || c == '\n' || c == '\t')
       {
           state = OUT;
       }
       else if (state == OUT)
       {
           state = IN;
           ++nw;
       }
   }
   printf("%d %d %d\n", nl, nw, nc);
}
```
* Maybe if I use the state variable, I can achieve the results I want.
* The evaluation of the || operator will stop when one of it's conditions it's true.
### 1.6 Arrays
```
#include <stdio.h>

int main(void)
{
	int c, i, nwhite, nother;
	int ndigit[10];

	nwhite = nother = 0;
	for (i = 0; i < 10; ++i)
	{
		ndigit[i] = 0;
	}

	while ((c = getchar()) != EOF)
	{
		if (c >='0' && c <= '9')
		{
			++ndigit[c-0];
		}
		else if (c == ' ' || c == '\n' || c == '\t')
		{
			++nwhite;
		}
		else
		{
			++nother;
		}
	}
	
	printf("digits =");
	for (i = 0; i < 10; ++i)
	{
		printf(" %d", ndigit[i]);
	}
	printf(", white space = %d, other = %d\n", nwhite, nother);
}
```
* The ```for``` loop initializes all the array values at 0.
