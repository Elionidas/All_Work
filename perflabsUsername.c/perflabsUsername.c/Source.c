#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFSIZE 256

int main(void)
{
	//this time we are gonna read this stuff by 
	FILE * myFile_ptr = fopen("Class Roster.txt", "w"); // Opens a write file
	char tempBuff[256] = { 0 };	// Temporary buffer to store read lines
	char * tempReturnValue = tempBuff; // Holds fgets() return value
	int students = 0;
	int counter = 0;
	//lets add three seperate strings to hold the names
	char firstName[256] = { 0 };
	char middleName[256] = { 0 };
	char lastName[256] = { 0 };
	char userName[256] = { 0 };
	char output[256] = { 0 }; //string to be made of other strings. stringception baby

	//add a method for accepting new entries
	printf("Please enter a number of students");
	scanf("%d", &students);

	if (myFile_ptr != NULL) 	// Verify fopen() succeeded… 
	{	
		while (tempReturnValue) // Continue reading until return value is NULL
		{
			tempReturnValue = fgets(tempBuff, 256, myFile_ptr);
			if (tempReturnValue) 	// If EOF hasn’t been reached…
			{		
				fprintf(tempBuff, myFile_ptr);	// …print the buffer into the new file
			}
		}

		//new loop for adding to the file
		while (students > 0)
		{
			printf("%d students left to enter.\n Okay! Please enter the first, middle (if you have mutiple, do not seperate them), and last names of the students, seperated by a space, then push enter, for each student", students);
			scanf("%s %s %s", firstName, middleName, lastName);
			strcpy(output, firstName);
			strcat(output, " ");
			strcat(output, middleName);         //this block records the full name of the student
			strcat(output, " ");
			strcat(output, lastName);

			//now we take the full name, check for capital letters, 
			//and record the user name as lowercase first and middle, with their full last name
			//lets make a for loop for the first name
			//check for capital letters
			if ((firstName[0] >= 65) && (firstName[0] <= 90))
			{
				userName[0] = firstName[0];
				counter++;
			}
			//lets make another for middle names (which will be a little bigger possibly
			for (int i = 0; i < strlen(middleName); i++)
			{
				//check for capital letters
				if ((middleName[i] >= 65) && (middleName[i] <= 90))
				{
					userName[counter] = middleName[i];
					counter++;
				}
			}
			//finally, lets just add the whole last name onto the end, but change the uppercase to lower
			strcat(userName, lastName);

			char writeto[256] = { 0 };
			strcat(writeto, output);
			strcat(writeto, " has a username of "); //create the master string which contains the proper output
			strcat(writeto, userName);
			fputs(writeto, myFile_ptr); //places the new concat string back into the file

			////now we gotta clear the buffers for the new entries
			//clear_buffer(firstName, BUFFSIZE);
			//clear_buffer(middleName, BUFFSIZE); //buffer clear function i might need to build if my loop doesnt work
			//clear_buffer(lastName, BUFFSIZE);
			//clear_buffer(output, BUFFSIZE);

			//for loop to clean the entries out after each student is entered
			for (int i = 0; i < strlen(writeto); i++)
			{
				firstName[i] = '0';
				middleName[i] = '0';
				lastName[i] = '0';
				output[i] = '0';
				userName[i] = '0';
				writeto[i] = '0';
			}
			//all cleared? Great! now lets go lower the student counter by 1 and do it all again!
			students--;
		}

		fclose(myFile_ptr); // Always fclose anything you fopen.... ALWAYS
	}
	else
	{
		//return error
		return -1;
	}

	getchar(); getchar();

	return 0;
}