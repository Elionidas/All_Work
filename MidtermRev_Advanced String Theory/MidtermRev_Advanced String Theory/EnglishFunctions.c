/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////// CAPSTONE LAB I.3.A-1 ///////////////////////////////////////////
////////////////////////////////////////////////// "Advanced String Theory" /////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// The requirement for this lab is to define all of the EnglishFunctions.h functions as declared.
// The comment blocks for each function should clearly indicate what the requirements are for the function.
// There are a variety of appropriate solutions for many of these functions.
// Unit Test Code v1.c has been written to test all of the functions both individually and as a whole.
// This header definition file includes the instructor solution for the header functions.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
* FUNCTION:   int is_it_alphabet(signed char inputChar);
*
* ARGUMENTS:  inputChar is a single signed character that represents a single character
*                 that is tested as an alphabet letter.
*
* RETURNS:	  1 if inputChar is an alphabet character
*             0 if inputChar is not an alphabet character
*
* NOTES:      This function should not care if inputChar is uppercase or lowercase
*             The return value represents a boolean response without using a 'bool' data type
*             The letters a through z and A through Z represent "alphabet letters" for
*                 the purposes of this assignment.
*/


int is_it_alphabet(signed char inputChar)
{
	//lets make a function for finding alphabet characters in an ASCII table
	//simple. check the character, and see if it matches an array of ASCII numbers
	//next we create a for loop to run all 52 characters against the inputchar
	//now for an if statement to check each character as it passes through
	//if the char falls in between the ASCII values coresponding to the letters, pass. if not, 0.
	if ((inputChar >= 65 && inputChar <= 90) || (inputChar >= 97 && inputChar <= 122))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

/*
* FUNCTION:   int remove_non_letters(char * sentenceString);
*
* ARGUMENTS:  senteceString is expected to be a pointer to a null-terminated string
*
* RETURNS:	  Number of characters that were removed
*             -1 if sentenceString is NULL
*
* NOTES:      The execution of this function must utilize is_it_alphabet() to determine
*                 whether or not a given char is an alphabet letter or not.
*             In addition to removing non-alphabet letters, this function will also remove any
*                 "blank space".
*             Most importantly, sentenceString will be null-terminated before the function returns
*/
int remove_non_letters(char * sentenceString)
{
	//alright this function takes our input, runs it agaist is_it_alphabet, and then removes any spaces
	//lets start by first checking our returns. we need to state how many characters are removed, or a -1 if its null
	//first off lets declare a counter.
	int removalCounter = 0;
	//now lets declare a new check for seeing if the character is a letter
	int isLetter = 0;

	//now that we've done that, lets form a function that pulls all non-alphabet characters, AND spaces
	int counter = 0;
	if (sentenceString == '\0')
	{
		return -1;
	}
	while (sentenceString[counter] != '\0')
	{
		//run the alphabet check to see if the individual character is a letter
		isLetter = is_it_alphabet(sentenceString[counter]);

		//if statement for deciding to skip the letter if it happens to not be a letter
		if (isLetter == 0)
		{
			memmove(&sentenceString[counter], &sentenceString[counter + 1], strlen(sentenceString)- counter);
			removalCounter++;
		}
		else 
		{
			counter++;
		}
	}		
	return removalCounter; //hey look ma, no spaces!
}


/*
* FUNCTION:   int reverse_string(char * inputString, char * outputBuff, int inputPosition);
*
* ARGUMENTS:  inputString is expected to be a pointer to a null-terminated string
*             outputBuff is expected to be a pointer to a char array which will store the reversed string from inputString
*             inputPosition is the element of inputString that reverse_string() should reverse
*
* RETURNS:	  Number of characters that were reversed
*             -1 if either inputString or outputBuff is NULL
*             -2 if inputPosition is unrealistic
*                 Examples:
*                     inputPosition is negative
*                     inputPosition is out of the array's scope
*
* NOTES:      This function can be done either itterativly or recursively. Skip over null-terminated input validation!
*
*
*			  Recursive:
*                 1. Reverse inputString[inputPosition] into outputBuff[]
*                 2. Call reverse_string() to reverse the next inputString[] position
*                 3. Count and return the total number of characters that were reversed from inputString[]
*                        into outputBuff[]
*             outputBuff is treated as the same length as inputString.  If outputBuff is longer, it
*                 will still be treated the same length as inputString.  Ideally, outputBuff and inputString
*                 are the exact same length.
*             Most importantly, outputBuff will be null-terminated before the function returns
*
*			 Itterative:
*				  1. Do input checks and return errors if needed
*				  2. LOOP: Reverse inputString[inputLength - i - 1] into outputBuff
*				  3. Count and return the total number of characters that were reversed from inputString[]
*
*				  Ensuring you start at the end of inputString and itterate until you have reached the
*				  inputPosition is very important.
*					EXAMPLE:
*					someArray[] = "Hello World"
*					inputPosition = 3
*					outputBuff = dlroW ol"
*
*/
int reverse_string(char * inputString, char * outputBuff, int inputPosition)
{
	/*
	 Itterative:
		*1. Do input checks and return errors if needed
		*2. LOOP: Reverse inputString[inputLength - i - 1] into outputBuff
		*3. Count and return the total number of characters that were reversed from inputString[]
	*/
	//lets count how many letters got switched!
	int reversed = 0;

	if (inputString == '\0')
	{
		return -1;
	}
	if (outputBuff == '\0')
	{
		return -1;
	}
	if ((inputPosition >= strlen(inputString)) || (inputPosition < 0))
	{
		return -2;
	}

	//build a counter
	int outputcount = 0;
	int count = 0;
	int reversecount = strlen(inputString) - 1;

	//now for a while loop that flips that sucker
	while(inputString[count] != '\0')
	{
		//check for out of index
		if (reversecount > (strlen(inputString) - 1))
		{
			break;
		}

		//alright we are doing this whole thing over. we are starting at the inputposition, and making the next 
		//element the first element of outputbuff, repeating it until the string is backwards, minus everything before inputposition
		outputBuff[outputcount] = inputString[reversecount];
		outputcount++;
		count++;
		reversecount--;

		//when it hits inputposition
		if (reversecount == (inputPosition - 1))
		{
			break;
		}
		else if (count == strlen(inputString))
		{
			break;
		}
	}

	//lets add some values to reversed
	reversed = strlen(inputString) - inputPosition;

	return reversed;	
}


/*
* FUNCTION:   int clear_a_buffer(char * fullBuff, int buffSize);
*
* ARGUMENTS:  fullBuff is expected to be a pointer to a char array
*             buffSize represents the dimension of fullBuff[]
*
* RETURNS:	  0 on success
*             -1 if fullBuff is NULL
*             -2 if buffSize is unrealistic
*                 Examples:
*                     buffSize is zero
*                     buffSize is negative
*
* NOTES:      This function 'zeroizes' all of the elements of fullBuff[buffSize]
*             fullBuff does not necessarily need to be a null-terminated string since the array's
*                 dimension is passed in as an argument (for safety)
*/
int clear_a_buffer(char * fullBuff, int buffSize)
{
	int count = 0;

	//lets check the sizes
	if (!fullBuff)
	{
		return -1;
	}
	if (buffSize = 0)
	{
		return -2;
	}
	if (buffSize < 0)
	{
		return -2;
	}
	else
	{
		while (fullBuff[count] != '\0')
		{
			fullBuff[count] = 0;
			count++;
		}

		return 0;
	}
}