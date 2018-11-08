#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//function for printing the new file into the terminal
int read_new(FILE * newFile_ptr);

int main(void)
{
	FILE * myFile_ptr = fopen("Exist.txt", "r"); // Opens a read-only file
	FILE * newFile_ptr = fopen("new.txt", "w");
	char readFromFile = 0; // Store char-by-char input from myFile_ptr
	int isRead;
	if (myFile_ptr != NULL) 	// Verify fopen() succeeded
	{
		while (readFromFile != EOF) // Continue reading until the end of file
		{
			readFromFile = getc(myFile_ptr); 	// Read one character
			putc(readFromFile, newFile_ptr);	// Print that character
		}
		fclose(newFile_ptr);
		fclose(myFile_ptr); // Always fclose anything you fopen
	}
	else 			// Otherwise, fopen() failed
	{
		puts("Error opening file!"); 	// Tell the user and...
		getchar(); getchar();
		return -1;			// Return an error value
	}
	//added another function to make the file read different than this one
	isRead = read_new(newFile_ptr);

	getchar(); getchar();

	return 0;
}

//read this new file and print it to the terminal
int read_new(FILE *newfile_ptr)
{
	FILE * myFile_ptr = fopen("new.txt", "r"); // Opens a read-only file
	char readFromFile = 0; // Store char-by-char input from myFile_ptr

	if (myFile_ptr != NULL) 	// Verify fopen() succeeded
	{
		while (readFromFile != EOF) // Continue reading until the end of file
		{
			readFromFile = getc(myFile_ptr); 	// Read one character
			putc(readFromFile, stdout);	// Print that character
		}
		fclose(myFile_ptr); // Always fclose anything you fopen
	}
	else 			// Otherwise, fopen() failed
	{
		puts("Error opening file!"); 	// Tell the user and...
		getchar(); getchar();
		return -1;			// Return an error value
	}

	return 0;
}