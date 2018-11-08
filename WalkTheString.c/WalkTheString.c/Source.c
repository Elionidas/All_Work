/*
    READ A STRING AND WRITE IT TO A ZEROIZED CHAR ARRAY.
    USE ASSERT() TO VERIFY THE LAST ELEMENT OF THE CHAR ARRAY IS NUL.
    STEP #1- SAFELY WRITE TO THE ARRAY.
    STEP #2- BREAK ASSERT() BY UNSAFELY READING INPUT INTO THE CHAR ARRAY.
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main()
{
	//we best be building yon variables
	int *Input_o_User[] = { 0 };

	//READ A STRING AND WRITE IT TO A ZEROIZED CHAR ARRAY.
	printf("Enter ye string");

	//pull ye size of that there input
	int timbers = strlen(Input_o_User);

	//STEP #1- SAFELY WRITE TO THE ARRAY.
	scanf("%c", Input_o_User);
	timbers = strlen(Input_o_User);

	// USE ASSERT() TO VERIFY THE LAST ELEMENT OF THE CHAR ARRAY IS NUL.
	assert(Input_o_User[timbers]);

	//STEP #2 - BREAK ASSERT() BY UNSAFELY READING INPUT INTO THE CHAR ARRAY.	
	//that there be sabotage!
	Input_o_User[timbers] = '#';
}