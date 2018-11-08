/*
	PerformanceLab7_2A.c
	Name: Elias Perez
	Date: July 17th 2018
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//Initialize a char array to zero.
	char array1[256] = { 0 };

	//Safely store a user - input string in the char array.
	printf("Please enter a word\n");
	scanf("%s", &array1);

	//Safely print the string IF the following conditions are both true:
	//The first element greater than or equal to decimal value 32.
	//The first element is less than decimal value 126.
	if ((array1[0] >= 32) && (array1[0] <= 126))
	{
		printf("your word is %s!\n", array1);
	}
	else
	{
		printf("im sorry, but i cant let you do that");
	}

	return 0;
}