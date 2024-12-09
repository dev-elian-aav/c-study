# Chapter 1 - A Tutorial Introduction
## 1.1 Getting Started

[QUESTIONS]

1. How related are C and C++?
2. How the C compiler, written in C, was compiled in the first place?
3. Why the introduction separates OSes from "major programs"?
4. What's the size of C variable types now?
5. What are the use cases of while and for?
6. When should be for used instead of while and viceversa?
7. If the choice between while and for is arbitrary, Why include them both in the language?
8. What is the precedence of operators?

[ANSWERS]

6. *"The choice between while and for is arbitrary, based on which seems clearer"* - Kernighan and Ritchie

[NOTES]

* C is a typed programming language.
* C is a low level language.
* C programs are comprised of functions and variables.
* Every program must have a "main" function somewhere.
* Functions are comprised of statements.
* The list of values provided to a function are called arguments.
* () besides a function means a empty list, the function expects no arguments.
* character string: sequence of characters inside double quotes.
* printf never supplies a newline character.
* escape sequence: general and extensible mechanism to write hard-to-type/invisible characters.
* All variables in C have to be declared before they are used.
* while: test condition -> condition is true -> execute statements inside the loop.
* while: test condition -> condition is false -> execute statements after the loop.
* Indentation and spacing are for better readability of the code.
* Integer division truncates in C. (Not special to C though)
* If you can pass the value of a variable, you can pass a expression of the same type.
* A for loop consist of three parts: The initialization, the condition and the step.
* Magic numbers: numbers that you can't easily know what they are for, 
and are a pain to change if used repeatedly in a program.
* Convention: Symbolic constant names are written in uppercase.
* int can hold more data than char.
* Assignments can be part of larger expressions.
