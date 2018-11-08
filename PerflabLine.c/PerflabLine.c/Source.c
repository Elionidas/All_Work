#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int read_new(FILE * newFile_ptr);

int main(void)
{
	//this time we are gonna read this stuff by 
	FILE * myFile_ptr = fopen("Exist.txt", "r"); // Opens a read-only file
	FILE * newFile_ptr = fopen("new.txt", "w");
	char tempBuff[256] = { 0 };	// Temporary buffer to store read lines
	char * tempReturnValue = tempBuff; // Holds fgets() return value
	int isRead;

	if (myFile_ptr != NULL) 	// Verify fopen() succeeded… 
	{
		while (tempReturnValue) // Continue reading until return value is NULL
		{
			tempReturnValue = fgets(tempBuff, 256, myFile_ptr);
			if (tempReturnValue) 	// If EOF hasn’t been reached…
			{
				fputs(tempBuff, newFile_ptr);	// …print the buffer into the new file
			}
		}

		fclose(newFile_ptr);
		fclose(myFile_ptr); // Always fclose anything you fopen.... ALWAYS
	}
	else
	{
		//return error
		return -1;
	}

	//added another function to make the file read different than this one
	isRead = read_new(newFile_ptr);
	return 0;

	getchar(); getchar();

	return 0;
}
//read this new file and print it to the terminal
int read_new(FILE *newfile_ptr)
{
	//this time we are gonna read this stuff by 
	FILE * myFile_ptr = fopen("new.txt", "r"); // Opens a read-only file
	char tempBuff[256] = { 0 };	// Temporary buffer to store read lines
	char * tempReturnValue = tempBuff; // Holds fgets() return value

	if (myFile_ptr != NULL) 	// Verify fopen() succeeded… 
	{
		while (tempReturnValue) // Continue reading until return value is NULL
		{
			tempReturnValue = fgets(tempBuff, 256, myFile_ptr);
			if (tempReturnValue) 	// If EOF hasn’t been reached…
			{
				fputs(tempBuff, stdout);	// …print the buffer to the terminal
			}
		}
		fclose(myFile_ptr); // Always fclose anything you fopen.... ALWAYS
	}
	else
	{
		//return error
		return -1;
	}

	return 0;
}