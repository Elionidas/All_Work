/*
Peformancelab 14.1 - surfin bird
Name: Elias Perez
Date: july 31, 2018
*/

#include <stdio.h>
#include <stdlib.h>

/*
Struct
“Surfin’ Bird Test Struct”
Define a struct to test find_the_word() from Performance Lab I.5.a-4
char * find_the_word(char * sentence_ptr, char * searchWord_ptr, int * errorCode_ptr);
    Your struct should include:
        Input string (sentence_ptr)
        Input search word (searchWord_ptr)
        Expected return value (char *)
        Expected error code (*(errorCode_ptr))
    Only Address Arithmetic is permitted
    Print the human-readable results
    Test input should include, at a minimum, the following situations:
     `   Normal input
     `   sentence_ptr is NULL
     `   searchWord_ptr is NULL
     `   errorCode_ptr is NULL
     `   Two occurrences of searchWord
        No occurrences of searchWord
*/

//slap in some headers
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#define ERROR_NULL_STRING_POINTER 00001
#define ERROR_NULL_SEARCH 00002
#define ERROR_SUCCESS = 0

char * find_the_word(char * sentence_ptr, char * searchWord_ptr, int * errorCode_ptr);

//hey perez, when you're done being dumb, we pass the function STRUCT VALUES, not the strings...idiot
//(talking to myself, carry on)
struct BirdTest
{
	char *Input_String;
	char *Input_Search;
	char *Expected_Return;
	char *Expected_Error;
};

int main()
{
	//lets build the main and set some test cases for it shall we?
	//first of lets build the program to accept the numbers we pass it
	int caseCount = 0; //this will run through a switch statement so it can run multiple test cases
	int baseError = 00000; //set a base error code that will be changed should an error arise

	//ladies and gents we shall create an array of structs, which change values based upon the index!
	char *Struct_Array[] = { 0 };
	
	switch (caseCount)
	{
	case 0:
		find_the_word("Good luck to you on this lab.\nI hope you do well.", '\n', baseError);
		caseCount++;
		break;
	case 1:
		find_the_word("Normal test input.  'The' is the search key.", 'The', baseError);
		caseCount++;
		break;
	case 2:
		find_the_word(NULL, '0/', baseError);
		caseCount++;
		break;
	case 3:
		find_the_word("It's a shame to waste a perfectly good sentence.", NULL, baseError);
		caseCount++;
		break;
	case 4:
		find_the_word("This is also normal input.  The 'bird' is the word.", 'bird', NULL);
		caseCount++;
		break;
	case 5:
		find_the_word("This string is an example of a string that has two occurrences of the word 'is'.", 'is', baseError);
		caseCount++;
		break;
	}
}


char * find_the_word(char * sentence_ptr, char * searchWord_ptr, int * errorCode_ptr)
{
	char * returnVal_ptr = NULL;
	int sentenceLength = 0;
	int searchLength = 0;
	int i = 0;
	int j = 0;

	if (!sentence_ptr)
	{
		returnVal_ptr = NULL;
		*errorCode_ptr = ERROR_NULL_STRING_POINTER;
	}
	else if (!searchWord_ptr)
	{
		returnVal_ptr = NULL;
		*errorCode_ptr = ERROR_NULL_STRING_POINTER;
	}
	else if (!errorCode_ptr)
	{
		returnVal_ptr = NULL;
	}
	else
	{
		sentenceLength = strlen(sentence_ptr);
		searchLength = strlen(searchWord_ptr);
		if (searchLength > sentenceLength)
		{
			returnVal_ptr = NULL;
			*errorCode_ptr = ERROR_NULL_SEARCH;
		}
		else
		{
			*errorCode_ptr = ERROR_NULL_SEARCH;
			for (i = 0; i <= (sentenceLength - searchLength); i++)
			{
				if (*(sentence_ptr + i) == *(searchWord_ptr))
				{
					if (searchLength == 1)
					{
						returnVal_ptr = (sentence_ptr + i);
						*errorCode_ptr = ERROR_SUCCESS;
						return returnVal_ptr;
					}
					else
					{	//If searchLength greater than 1
						for (j = 1; j < searchLength; j++)
						{
							if (*(sentence_ptr + i + j) != *(searchWord_ptr + j))
							{
								break; //We cannot find the word My lord.
							}
							else if (j == (searchLength - 1))

							{
								returnVal_ptr = (sentence_ptr + i);
								*errorCode_ptr = ERROR_SUCCESS;
								return returnVal_ptr;
							}
						}
					}
				}
			}
		}
	}
	return returnVal_ptr;
}