/*
Demo Lab "string-splitter"

Struct

“String Splitter Test Struct”

    Define a struct to test split_the_string() from Performance Lab I.5.a-3
    
*/

char * split_the_string(char * string_ptr, char delimiter);

int main(void)
{
	return 0;
}

/*
* FUNCTION:   char * split_the_string(char * string_ptr, char delimiter)
*
* ARGUMENTS:  string_ptr is a null-terminated string that may or may not contain a delimiting
*                 character (see: delimiter) that logically separates two phrases to be "split"
*             delimiter is the character that logically separates the two phrases that may be
*                 in the null-terminated char array found at string_ptr
*
* RETURNS:	   char pointer to the first element of the second (null-terminated) phrase on success
*             ERROR_NULL_POINTER if string_ptr is NULL
*             ERROR_NULL_DELIMITER if delimiter is '\0' (0x0)
*             ERROR_ABUNDANT_DELIMITER if string_ptr has more than one occurrence of delimiter
*             string_ptr if delimiter is not found
*
* NOTES:      This function only utilizes address arithmetic to access information within the
*                 null-terminated char array found at string_ptr
*             Only access elements of the char array found at string_ptr using address arithmetic
*                 (AKA pointer math).  The definition of this function should be entirely devoid
*                 of the [ and ] characters.  (e.g., string_ptr[i] is forbidden)
*             The only guarantee for the arguments is that string_ptr is null-terminated
*             There is no guarantee it has a delimiter (return string_ptr if not)
*             There is no guarantee it only has one delimiter if there is one (return ERROR_ABUNDANT_DELIMITER if not)
*             There is no guarantee the delimiter is some char *other* than '\0' (return ERROR_NULL_DELIMITER if not)
*             There is no guarantee that string_ptr has an address (return ERROR_NULL_POINTER if NULL)
*/

char * split_the_string(char * string_ptr, char delimiter)
{

}