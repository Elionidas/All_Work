#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	//this time we are gonna read this stuff by 
	FILE * myFile_ptr = fopen("Tux.txt", "r"); // Opens a read-only file
	char tempBuff[256] = { 0 };	// Temporary buffer to store read lines
	char * tempReturnValue = tempBuff; // Holds fgets() return value
	//i added a number so i can give the option to play the song or not
	int play;

	if (myFile_ptr != NULL) 	// Verify fopen() succeeded… 
	{
		while (tempReturnValue) // Continue reading until return value is NULL
		{
			tempReturnValue = fgets(tempBuff, 256, myFile_ptr);
			if (tempReturnValue) 	// If EOF hasn’t been reached…
			{
				puts(tempBuff);	// …print the buffer
			}
		}
		//added the option to play it as well as stare at the words
		printf("Press 1 to play the song, anything else to close the program");
		scanf("%d", &play);

		//play song
		if (play == 1)
		{
			system("start https://www.youtube.com/watch?v=mGJTS6CwQQ0");
			while (1);
		}

		fclose(myFile_ptr); // Always fclose anything you fopen.... ALWAYS
	}
	else
	{
		//return error
		return -1;
	}
		return 0;

	getchar(); getchar();

	return 0;
}