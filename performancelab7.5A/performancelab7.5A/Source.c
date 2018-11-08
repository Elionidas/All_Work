/*
PerformanceLab7.5A.c
Name: Elias Perez
Date: July 18th 2018
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
/*
    Print all the even or odd numbers from 0 to 100.
    Prompt the user for input to indicate odds or evens.
    Loop from 0 to 100 and print all indicated numbers.
    Use and IF statement to check if even or odd.
*/
	//user input and incrementing variables
	unsigned int x = 0;
	int output = 0;
	int y = 0;

	//prompt teh user for evens or odds
	printf("Odds or Evens my good sir? 1 for odds, 2 for evens\n");
	scanf("%d", &x);
	printf("\n");
	//while loop keeping the range within 100
	while (y <= 100 && output < 101 && output < 102)
	{		
		y++;
		if (y > 100)
		{
			break;
		}

		//code for odds
		if (x == 1)
		{
			//the output variable changes into a 1, forcing the loop into odds
			output++;
			if (output % 2 != 0)
			{
				printf("%d\n", output);
				continue;
			}
		}
		//code for displaying evens
		else if (x == 2)
		{
			//output now increments by 2, forcing the loop into evens
			if (output == 100) 
			{
				//stops the weird bug where it allows 102 to be an output
				break;
			}
			else
			{
				output++;
				output++;
				if (output % 2 == 0)
				{
					printf("%d\n", output);
					continue;
				}
			}
		}
		else 
		{
			printf("Not a valid input");
		}
	}

	while (1);
	return 0;
}