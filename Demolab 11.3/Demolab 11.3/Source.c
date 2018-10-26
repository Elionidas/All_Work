/*
Demolab 11.3
Name: Elias Perez
Date: July 26th, 2018
*/

/*
return value -0 on success, -1 if string_ptr is null, -2 if howMany_ptr is NULL,
-3 if countThis is '\0' (0x0), -4 if countThis is not found

parameters-
	string_ptr- pointer to a null terminated string
	countThis- single character to search string_ptr for
	howMany_ptr- an int pointer to store the amouunt of countThis found in string_ptr

purpose- count the number of occurences of countThis in the string found at string_ptr and store the count in howMany_ptr
requirements- only address arithmetic is permitted to access string_ptr
*/

#include <stdio.h>
#define BUFF_SIZE ((int)1024)

int count_this_letter(char * string_ptr, char countThis, int * howMany_ptr);

//main function holds the executable code that will run
int main(void)
{
	
}

//this function counts the number of times a specific letter shows up
int count_this_letter(char * string_ptr, char countThis, int * howMany_ptr)
{
	
}