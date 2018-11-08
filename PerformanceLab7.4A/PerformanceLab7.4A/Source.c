/*
PerformanceLab7.4A.c
Name: Elias Perez
Date: July 18th 2018
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//Input an unsigned integer "x".
	unsigned int x = 0;      // User inputted number
	int y = 1;      // Increment var

	printf("Enter a number between 1-999: ");
	scanf("%4d", &x);

	// Immediately stop this process when the user inputs an integer above 999.
	if (x > 999)
	{
		printf("Senpai!! Your number is too big >_<! You can't enter numbers larger than 999");
		return 0;
	}

	// Print the first 10 to 20 positive integers that x is divisible by utilizing the mod operator (not the most efficient)
	// Repeat this process.
	// Ignore any "divide by 0" errors using continue.

	//imma try a new statement
	for (y = 1; y < x; y++)
	{
		if (x % y == 0)
		{
			printf("%d is divisble by %d\n", x, y);
			continue;
		}
		else if (y == 0)
		{
			printf("I'm sorry Travis, but i can't let you do that. Skipping this number...");
			continue;
		}
	}

	while (1);
	return 0;
}