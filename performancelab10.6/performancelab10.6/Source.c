/*
PerformanceLab 10.6
Name: Elias Perez
Date: 24th July 2018
*/

/*
Write a C program with preprocessor directives to:

Combine two string literals
Wrap those string literals in quotes
Define a constant buffer size of 64
*/

//usual safety stuff. after all dont want any crashes!
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//define ye buffer with size o' 64
#define BUFF_SIZE 64

//lets define us some strings and fusion yo
//dont got polymerization, but i do have ##!
#define FUSION(x, y) x##y
//you need this to properly fuse strings together
#define FUSION_ACTIVATE(a, b) FUSION(a, b)

//define strings as necessary
#define YOU "you've activated "
#define TRAP "MY TRAP CAAAAAARD"

int main()
{
	/*
	Define an array:
	Assign the wrapped string literals to the array
	*/
	char trapcard[BUFF_SIZE] = FUSION_ACTIVATE(YOU, TRAP);

	//print the array
	printf("%s", trapcard);

	getchar();
	getchar();
	return 0;
}