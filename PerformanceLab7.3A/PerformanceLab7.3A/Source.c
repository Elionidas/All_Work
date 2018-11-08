/*
PerformanceLab7.3A
Name:Elias Perez
Date:July 17th 2018
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() 
{
	//declaring local scope variables
	char increment[30] = {0};
	printf("Please enter a word under 30 characters:\n");
	scanf("%c", &increment);
	increment[30] = '0/';

	//for loop that displays a word line by line by character
	for (int i = 0; i < 30; i++)
	{
		printf("%c\n", increment[i]);
	}

	while (1);
	return 0;
}