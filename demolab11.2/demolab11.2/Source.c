/*
Demolab11.2
Name: Elias Perez
Date: 25th July, 2018
*/

/*
return value - int pointer to the smallest natural number found in the array at intArray_ptr
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int * find_smallest_natural_number(int * intArray_ptr, int arraySize)
{
	//declaring local scope variables
	int lilNum = 1000; //pointer for smallest number result	

	//add a counter variable
	int counter = 0;

	//check for some BS entries
	if (intArray_ptr = NULL)
	{
		lilNum = NULL;
	}
	else if (arraySize < 1)
	{
		lilNum = NULL;
	}
	else
	{
		//lets loop it up!
		while (counter < arraySize)
		{
			//if we find a smaller number
			if ((intArray_ptr + counter) < lilNum)
			{
				//replace current value with new one
				lilNum = (intArray_ptr + counter);
			}
			counter++;
		}
	}
	return lilNum;
}

int main() 
{
	//let us create an array of tasty goodness 
	int tastyArray[6] = { 1, 2, 0, 3, 4, 5 };
	//now a pointer to our tasty array
	int * tastyArray_ptr = tastyArray;
	//int for testing array
	int testy;

	//have the result bust out a zero if this ballz up somehow
	testy = find_smallest_natural_number(tastyArray_ptr, 6);

	//typical if NULL statement
	if (testy = NULL)
	{
		printf("Houston, we have a problem"); //hehe insert reference
		return 0;
	}
	else
	{
		printf("%d was the smallest number inside the array", testy);
	}
	//curtain falls on dis demolab
	while (1);
	return 0;
}