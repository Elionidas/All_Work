/*
PerformanceLab7_2C.c
Name: Elias Perez
Date: 17th July 2018
*/

/*
SWAP THE LARGEST NUMBER
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <inttypes.h>

int main()
{
	//Initialize ONLY three unsigned int variables to 0.
	unsigned int numOne = 0;
	unsigned int numTwo = 0;
	unsigned int numThree = 0;

	//Safely scan user input into the variable #1 and #2 utilizing a single line.
	printf("Please enter two numbers seperated by a space\n");
	printf("example: 4 5, 6 7, etc.\n");
	scanf("%d %d", &numOne, &numTwo);

	//Using a single ELSE - IF statement :
	//If variable #1 is equal to variable #2, print an ERROR.
	if (numOne == numTwo)
	{
		printf("I'm sorry, there was an error. Please close this window and try again.\n");
	}
	//Otherwise, exchange the value of the largest variable with variable #3 while preserving the other value.
	else if (numOne != numTwo)
	{
		if (numOne > numTwo)
		{
			if ((numOne - numTwo == 2) | (numTwo - numOne == -2))
			{
				printf("%d %d %d", numOne, numTwo, numThree);
			}
			else
			{
				numThree = numTwo;

				printf("The numbers have been swapped into %d and %d\n", numOne, numThree);
			}
		}
		//Print the values of all three variables if the SUM of the three variables is greater than 2,
		//regardless of the previous ELSE - IF statement.
		else
		{
			printf("you entered %d and %d\n", numOne, numTwo);
		}
	}

	while (1);
	return 0;
}