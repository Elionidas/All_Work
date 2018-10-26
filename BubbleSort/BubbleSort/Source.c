/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////// PERFORMANCE LAB (I.5.A) 8 /////////////////////////////////////////////
///////////////////////////////////////////////// FUNCTION POINTERS /////////////////////////////////////////////////
/////////////////////////////////////////// "Every integer is bigger in Texas" //////////////////////////////////////
///////////////////////////////////////////////// Instructor Solution ///////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Define each of the following function prototypes IAW their associated comment blocks:
//     int low_to_high_compare(int x, int y)
//     int high_to_low_compare(int x, int y)
//     int absolute_low_to_high_compare(int x, int y)
//     int absolute_high_to_low_compare(int x, int y)
// Write eight (8) tests for bubble_sort() (see: the comment block below), two tests for each of the function
//     prototypes listed above. 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

#define BUFFSIZE 2

#ifndef TRUE
#define TRUE ((int)1)
#endif

#ifndef FALSE
#define FALSE ((int)0)
#endif

/*
* FUNCTION:   low_to_high_compare(int x, int y)
*
* ARGUMENTS:  Two sequential integers to compare
*             For the sake of ordering, x should come before y
*
* RETURNS:	  If x is greater than or equal to y, return 1
*             On error, return -1
*             Return 0 for all other conditions
*
* NOTES:      This function compares the values of x and y
*             If x is greater than or equal y, y needs to be "bubbled up" to the top
*             Large numbers are ordered first
*
* EXAMPLES:   x = 9, y = 0, return 1
*             x = 8, y = 68, return 0
*             x = -24, y = 318, return 0
*             x = -318, y = -688, return 1
*/
int low_to_high_compare(int x, int y);				// Choice 1

													/*
													* FUNCTION:   int high_to_low_compare(int x, int y)
													*
													* ARGUMENTS:  Two sequential integers to compare
													*             For the sake of ordering, x should come before y
													*
													* RETURNS:	   If x is less than or equal to y, return 1
													*             On error, return -1
													*             Return 0 for all other conditions
													*
													* NOTES:      This function compares the values of x and y
													*             If x is less than or equal y, y needs to be "bubbled up" to the top
													*             Large numbers are ordered first
													*
													* EXAMPLES:   x = 9, y = 0, return 0
													*             x = 8, y = 68, return 1
													*             x = -24, y = 318, return 1
													*             x = -318, y = -688, return 0
													*/
int high_to_low_compare(int x, int y);				// Choice 2

													/*
													* FUNCTION:   int absolute_low_to_high_compare(int x, int y)
													*
													* ARGUMENTS:  Two sequential integers to compare
													*             For the sake of ordering, x should come before y
													*
													*  RETURNS:   If the absolute value of x is greater than or equal to the absolute value of y, return 1
													*             On error, return -1
													*             Return 0 for all other conditions
													*
													* NOTES:      This function compares the values of x and y
													*             If the absolute value of x is greater than or equal the absolute value of y,
													*                 y needs to be "bubbled up" to the top
													*             This function will not attempt to modify the values of x and y
													*             Smaller numbers, regardless of 'sign', are ordered first
													*
													* EXAMPLES:   x = 9, y = 0, return 1
													*             x = 8, y = 68, return 0
													*             x = -24, y = 318, return 0
													*             x = -318, y = -688, return 0
													*/
int absolute_low_to_high_compare(int x, int y);		// Choice 3

													/*
													* FUNCTION:   absolute_high_to_low_compare(int x, int y)
													*
													* ARGUMENTS:  Two sequential integers to compare
													*             For the sake of ordering, x should come before y
													*
													* RETURNS:    If the absolute value of x is less than or equal to the absolute value of y, return 1
													*             On error, return -1
													*             Return 0 for all other conditions
													*
													* NOTES:      This function compares the values of x and y
													*             If the absolute value of x is less than or equal the absolute value of y,
													*                 y needs to be "bubbled up" to the top
													*             This function will not attempt to modify the values of x and y
													*             Large numbers, regardless of 'sign', are ordered first
													*
													* EXAMPLES:   x = 9, y = 0, return 0
													*             x = 8, y = 68, return 1
													*             x = -24, y = 318, return 1
													*             x = -318, y = -688, return 1
													*/
int absolute_high_to_low_compare(int x, int y);		// Choice 4


													/*
													* FUNCTION:   bubble_sort(int * arrayOfInts, int numOfElements, int(*compare_function)(int, int))
													*
													* ARGUMENTS:  arrayOfInts - a pointer to an array of integers
													*             numOfElements - the dimension of the integer array found at the int pointer arrayOfInts
													*             compare_function - a function pointer; This function should take two ints as parameters
													*                 and return an int.  The expectation is that compare_function performs a comparison
													*                 of the two ints and returns a boolean value.  This boolean value should represent
													*                 whether or not the two ints should be swapped.  If the return value of compare_function
													*                 is 1, then the two ints should be swapped in place.
													*
													* RETURNS:    The total number of int swaps that were made
													*             0 if no swaps were made
													*             -1 if any pointer is NULL
													*             -2 if numOfElements is unrealistic
													*             -3 on any other error
													*
													* NOTES:      This function is already defined below.  Do not modify this function.
													*             This function will sort, in place, the first "numOfElements" elements that are found
													*                 in the integer array found at pointer "arrayOfInts".  To accomplish this, bubble_sort()
													*                 will utilize the comparison function found at "compare_function" to accomplish this.
													*                 The expectation is that compare_function will compare two ints, n1 and n2.  In this, it
													*                 is expected that n1 comes before n2.  If n1 needs to swap with n2, compare_function will
													*                 return 1.  If not, compare_function will return 0.  Any other return value from
													*                 compare_function will be considered an error value (see: RETURNS).
													*/
int bubble_sort(int * arrayOfInts, int numOfElements, int(*compare_function)(int, int));

int main(void)
{
	//declaring an array for holding the numbers
	int arraysYo[BUFFSIZE] = { -9, 42 };
	int value;

	//declare a selection for which function to do
	char selection[1];
	//super clever pointer PFC mahaffey showed me to create multiple options
	int(*mathThing_ptr)(int x, int y);

	//wall of text to show the user
	printf("please choose which function you'd like to try!");
	printf("1: Low to High");
	printf("2: High to Low");
	printf("3: Absolute values Low to High");
	printf("4: Absolute values High to Low");
	printf("5: Close Application");
	scanf("%c", &selection);

	//switch statement allowing multiple function calls
	switch (*selection)
	{
	case '1':
		mathThing_ptr = &low_to_high_compare;
		break;
	case '2':
		mathThing_ptr = &high_to_low_compare;
		break;
	case '3':
		mathThing_ptr = &absolute_low_to_high_compare;
		break;
	case '4':
		mathThing_ptr = &absolute_high_to_low_compare;
		break;
	case '5':
		return 0;
	default:
		printf("please select an option");
		while (1);
	}

	value = bubble_sort(arraysYo, BUFFSIZE, *mathThing_ptr);
	printf("%d", value);

	while (1);
	return 0;
}

/*
* FUNCTION:   low_to_high_compare(int x, int y)
*
* ARGUMENTS:  Two sequential integers to compare
*             For the sake of ordering, x should come before y
*
* RETURNS:	  If x is greater than or equal to y, return 1
*             On error, return -1
*             Return 0 for all other conditions
*
* NOTES:      This function compares the values of x and y
*             If x is greater than or equal y, y needs to be "bubbled up" to the top
*             Large numbers are ordered first
*
* EXAMPLES:   x = 9, y = 0, return 1
*             x = 8, y = 68, return 0
*             x = -24, y = 318, return 0
*             x = -318, y = -688, return 1
*/
int low_to_high_compare(int x, int y)
{
	//* On error, return -1
	if ((x == NULL) || (y == NULL))
	{
		return -1;
	}
	//If x is greater than or equal to y, return 1
	else if (x >= y)
	{
		return 1;
	}
	//* Return 0 for all other conditions
	else
	{
		return 0;
	}
}

/*
* FUNCTION:   int high_to_low_compare(int x, int y)
*
* ARGUMENTS:  Two sequential integers to compare
*             For the sake of ordering, x should come before y
*
* RETURNS:	   If x is less than or equal to y, return 1
*             On error, return -1
*             Return 0 for all other conditions
*
* NOTES:      This function compares the values of x and y
*             If x is less than or equal y, y needs to be "bubbled up" to the top
*             Large numbers are ordered first
*
* EXAMPLES:   x = 9, y = 0, return 0
*             x = 8, y = 68, return 1
*             x = -24, y = 318, return 1
*             x = -318, y = -688, return 0
*/
int high_to_low_compare(int x, int y)
{
	//declare returns
	//On error, return -1
	if ((x == NULL) || (y == NULL))
	{
		return -1;
	}	
	//If x is less than or equal to y, return 1 
	else if (x <= y)
	{
		return 1;
	}	
	//Return 0 for all other conditions
	else
	{
		return 0;
	}
}

/*
* FUNCTION:   int absolute_low_to_high_compare(int x, int y)
*
* ARGUMENTS:  Two sequential integers to compare
*             For the sake of ordering, x should come before y
*
*  RETURNS:   If the absolute value of x is greater than or equal to the absolute value of y, return 1
*             On error, return -1
*             Return 0 for all other conditions
*
* NOTES:      This function compares the values of x and y
*             If the absolute value of x is greater than or equal the absolute value of y,
*                 y needs to be "bubbled up" to the top
*             This function will not attempt to modify the values of x and y
*             Smaller numbers, regardless of 'sign', are ordered first
*
* EXAMPLES:   x = 9, y = 0, return 1
*             x = 8, y = 68, return 0
*             x = -24, y = 318, return 0
*             x = -318, y = -688, return 0
*/
int absolute_low_to_high_compare(int x, int y)
{
	//lets create new variables to store our absolute values!
	int absoluteX = abs(x);
	int absoluteY = abs(y);

	//declare returns
	//if error, return -1
	if ((absoluteX == NULL) || (absoluteY == NULL))
	{
		return -1;
	}
	//If the absolute value of x is greater than or equal to the absolute value of y, return 1
	else if (absoluteX >= absoluteY)
	{
		return 1;
	}
	//return 0 for all other conditions
	else 
	{
		return 0;
	}
}

/*
* FUNCTION:   absolute_high_to_low_compare(int x, int y)
*
* ARGUMENTS:  Two sequential integers to compare
*             For the sake of ordering, x should come before y
*
* RETURNS:    If the absolute value of x is less than or equal to the absolute value of y, return 1
*             On error, return -1
*             Return 0 for all other conditions
*
* NOTES:      This function compares the values of x and y
*             If the absolute value of x is less than or equal the absolute value of y,
*                 y needs to be "bubbled up" to the top
*             This function will not attempt to modify the values of x and y
*             Large numbers, regardless of 'sign', are ordered first
*
* EXAMPLES:   x = 9, y = 0, return 0
*             x = 8, y = 68, return 1
*             x = -24, y = 318, return 1
*             x = -318, y = -688, return 1
*/
int absolute_high_to_low_compare(int x, int y)
{
	//lets create new variables to store our absolute values!
	int absoluteX = abs(x);
	int absoluteY = abs(y);

	//declare returns
	//if error, return -1
	if ((absoluteX == NULL) || (absoluteY == NULL))
	{
		return -1;
	}
	//If the absolute value of x is less than or equal to the absolute value of y, return 1
	else if (absoluteX <= absoluteY)
	{
		return 1;
	}
	//return 0 for all other conditions
	else
	{
		return 0;
	}
}

/*
* FUNCTION:   bubble_sort(int * arrayOfInts, int numOfElements, int(*compare_function)(int, int))
*
* ARGUMENTS:  arrayOfInts - a pointer to an array of integers
*             numOfElements - the dimension of the integer array found at the int pointer arrayOfInts
*              compare_function - a function pointer; This function should take two ints as parameters
*                 and return an int.  The expectation is that compare_function performs a comparison
*                 of the two ints and returns a boolean value.  This boolean value should represent
*                 whether or not the two ints should be swapped.  If the return value of compare_function
*                 is 1, then the two ints should be swapped in place.
*
* RETURNS:    The total number of int swaps that were made
*             0 if no swaps were made
*             -1 if any pointer is NULL
*             -2 if numOfElements is unrealistic
*             -3 on any other error
*
* NOTES:      This function is already defined below.  Do not modify this function.
*             This function will sort, in place, the first "numOfElements" elements that are found
*                 in the integer array found at pointer "arrayOfInts".  To accomplish this, bubble_sort()
*                 will utilize the comparison function found at "compare_function" to accomplish this.
*                 The expectation is that compare_function will compare two ints, n1 and n2.  In this, it
*                 is expected that n1 comes before n2.  If n1 needs to swap with n2, compare_function will
*                 return 1.  If not, compare_function will return 0.  Any other return value from
*                 compare_function will be considered an error value (see: RETURNS).
*/
int bubble_sort(int * arrayOfInts, int numOfElements, int(*compare_function)(int, int))
{
	int returnValue = -3;	// Default return value in case something dies
	int i = 0;				// Iterating variable
	int j = 0;				// Iterating variable
	int swapCount = 0;		// Number of element swaps that have been made

	if (!arrayOfInts || !compare_function)	// If either of the pointers are NULL...
	{
		returnValue = -1;	// ...return -1
	}
	else if (numOfElements < 2) // If the number of elements is unrealistic...
	{
		returnValue = -2; // ...return -2
	}
	else
	{
		for (i = 0; i < numOfElements; i++) // Iterate through all of the elements...
		{
			for (j = 0; j < (numOfElements - 1); j++) // ...comparing each element to all the other elements
			{
				if ((compare_function(*(arrayOfInts + j), *(arrayOfInts + j + 1))) > 0) // If the compare function suggests a swap...
				{
					/* ...swap the values stored in each element */
					*(arrayOfInts + j) = *(arrayOfInts + j) ^ *(arrayOfInts + j + 1);
					*(arrayOfInts + j + 1) = *(arrayOfInts + j) ^ *(arrayOfInts + j + 1);
					*(arrayOfInts + j) = *(arrayOfInts + j) ^ *(arrayOfInts + j + 1);
					swapCount++; // A swap took place so increment the number of swaps counted
				}
			}
		}
		returnValue = swapCount; // Return the total number of swaps that took place
	}

	return returnValue;
}