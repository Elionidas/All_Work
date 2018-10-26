/*
Demolab8A.c
Name: Elias Perez
Date: July 18th 2018
*/

#include <stdio.h>

//function for changing newline characters to spaces
int remove_newline(char * buffer)
{
	//variable for counting changes
	int changes = 0;

	//declaration of string variable
	char nullstring[] = { 0 };

	//for loop setting up a step by step check of the nullstring arrray
	for (int i = 0; i < sizeof(nullstring); i++)
	{
		//if nullstring contains a newline, replace it with a space
		if (nullstring[i] == '\n')
		{
			nullstring[1] = ' ';
		}
		//checks for new lines, errors if false
		if (i == sizeof(nullstring)
		{
			return "ERR_NONE_FOUND";
			break;
		}
		//checks null pointer
		if (buffer == NULL)
		{
			return "ERR_NULL_POINTER";
		}
	}

	//ensure buffer is not null -check-
	//return ERR_NULL_POINTER if buffer is null
	//return ERR_NONE_FOUND if no newlines are found
}