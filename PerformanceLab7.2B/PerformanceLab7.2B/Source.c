/*
PerformanceLab7_2B.c
Name: Elias Perez
Date: July 17th 2018


contains a lot of comments as im fuzzy on the bitwise sections, 
and sgt grahams code needed comments for my understanding
*/

//sgt graham's method for convertion from byte to binary -take note for later use-
#define BYTE_TO_BINARY_PATTERN "%c%c%c%c%c%c%c%c"
#define BYTE_TO_BINARY(byte) \
(byte & 0x80 ? '1' : '0'), \
(byte & 0x40 ? '1' : '0'), \
(byte & 0x20 ? '1' : '0'), \
(byte & 0x10 ? '1' : '0'), \
(byte & 0x08 ? '1' : '0'), \
(byte & 0x04 ? '1' : '0'), \
(byte & 0x02 ? '1' : '0'), \
(byte & 0x01 ? '1' : '0')

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//Initialize a signed int to 0.
	int input = 0;
	//initalize a second number for shifting the bits and determining a negative
	int negative_check = 0;

	//Safely store a user integer.
	printf("Please enter a number\n");
	scanf("%d", &input);

	//shifting bits from the farthest bit to the first, to check for a negative
	negative_check = 1 + (input >> 31) - (-input >> 31);

	//Determine if the number is negative or positive utilizing a bitwise operator.
	//Utilizing an IF-ELSE statement:
	//INDICATE if the number is negative
	if (negative_check == 0)
	{
		printf("your number %d is already a negative", input);
	}
	//Otherwise, print the original value in binary, 
	//and use a bitwise operation to flip one bit to make it negative
	else
	{
		printf("here is what you entered: %d\n", input);
		printf("your binary converted number is "BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(input));
		//take the number and check NOT bitwise operator, to make a number negative
		//,this flips the bit that was shifted all the way over, creating a negative number
		printf("\n%d is now a negative!", ~input + 1);
	}

	//the while (1) holds open the window, stopping it from closing -remember this for future use-
	while (1);
	return 0;
}