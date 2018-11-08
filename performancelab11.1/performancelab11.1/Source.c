/*
PerformanceLab11.1
Name: Elias Perez
Date: July 25, 2018
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//Declare userInput, tempValue, and int_ptr as the same data type
	int userInput = 0;
	int tempValue = 0;

	int *int_ptr = 0;

	//read user input into userInput
	printf("please enter a number");
	scanf("%d", &userInput);

	//ensure tempValue contains the same value as userInput by utilizing memory operators
	int_ptr = &userInput;
	tempValue = *int_ptr;

	//print the value AND the pointer for each of the three variables in human-readable format
	printf("the results are %d, %x, %d", userInput, int_ptr, tempValue);

	//locate those addresses in memory window
	//summon the instructor
	//si vocare vester!!

	while (1);
	return 0;
}