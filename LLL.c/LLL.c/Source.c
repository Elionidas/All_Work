/*
	Utilize headers for all declarations
	Utilize proper naming schemas
	Document code
	Push code to Github
	Use branching!Create a development branch and push to there.Merge when all requirments are met
	Break your code out into functions
	Utilize multiple C files if needed
*/

/*
Create a linked list, the struct members should contain the following:
    Each students initals
    Each students favoriate musical artist
    Each students dream car
    Required data for linked list completion
    May be worth each student just posting their data into a slack channel so everyone can grab off of it

Create a menu allowing for the following:
    Print out of all students and all of their data
    Print out of all students and only one of their data members on request of user (ex. print out all students and their fav car)
    Print out of only a specific student (This one can be challanging)
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFSIZE 10

typedef struct Student //lets make us a bunch of info for our students
	{
		char Name[50];
		char Initials[3];
		char favArtist[50];
		char dreamCar[80];
		struct Student * next_node;
	}node;


//main function that gives us our options
int main() 
{
	//create the head and tail
	node * Elias_Perez = (node*)malloc(sizeof(node)); //tail
	node * Kyle_Yoder = (node*)malloc(sizeof(node));
	node * Robert_Graham = (node*)malloc(sizeof(node));
	node * Donnie_Macary = (node*)malloc(sizeof(node));
	node * Mane_Mann = (node*)malloc(sizeof(node));
	node * Tom_Burright = (node*)malloc(sizeof(node));
	node * Zackery_Vering = (node*)malloc(sizeof(node));
	node * Will_Kreiser = (node*)malloc(sizeof(node));
	node * Micheal_Yost = (node*)malloc(sizeof(node));
	node * Richard_Smith = (node*)malloc(sizeof(node)); //head

	//lets build this linked list
	strcpy(Elias_Perez->Name, "Elias Perez");
	strcpy(Elias_Perez->Initials, "EP");
	//null terminate
	Elias_Perez->Initials[3] = '0/';
	strcpy(Elias_Perez->favArtist, "Calvin Harris"); //Elias Perez
	strcpy(Elias_Perez->dreamCar, "Citroen Survolt");
	Elias_Perez->next_node = NULL;

	strcpy(Kyle_Yoder->Name, "Kyle Yoder");
	strcpy(Kyle_Yoder->Initials, "KY");
	//null terminate
	Kyle_Yoder->Initials[3] = '0/';
	strcpy(Kyle_Yoder->favArtist, "Earth, Wind and Fire"); //Kyle_Yoder
	strcpy(Kyle_Yoder->dreamCar, "Mitsubishi Lancer");
	Kyle_Yoder->next_node = Elias_Perez;

	strcpy(Robert_Graham->Name, "Robert Graham");
	strcpy(Robert_Graham->Initials, "RG");
	//null terminate
	Robert_Graham->Initials[3] = '0/';
	strcpy(Robert_Graham->favArtist, "Linkin Park"); //robert graham
	strcpy(Robert_Graham->dreamCar, "Honda Civic");
	Robert_Graham->next_node = Kyle_Yoder;

	strcpy(Donnie_Macary->Name, "Donnie Macary");
	strcpy(Donnie_Macary->Initials, "DM");
	//null terminate
	Donnie_Macary->Initials[3] = '0/';
	strcpy(Donnie_Macary->favArtist, "Offspring"); //Donnie macary
	strcpy(Donnie_Macary->dreamCar, "Dodge Charger");
	Donnie_Macary->next_node = Robert_Graham;

	strcpy(Mane_Mann->Name, "Mane Mann");
	strcpy(Mane_Mann->Initials, "MM");
	//null terminate
	Mane_Mann->Initials[3] = '0/';
	strcpy(Mane_Mann->favArtist, "Earth, Wind and Fire"); //mane mann
	strcpy(Mane_Mann->dreamCar, "Mitsubishi Eclipse");
	Mane_Mann->next_node = Donnie_Macary;

	strcpy(Tom_Burright->Name, "Tom Burright");
	strcpy(Tom_Burright->Initials, "TB");
	//null terminate
	Tom_Burright->Initials[3] = '0/';
	strcpy(Tom_Burright->favArtist, "Avenged Sevenfold"); //tom burright
	strcpy(Tom_Burright->dreamCar, "Suzuki Ninja");
	Tom_Burright->next_node = Mane_Mann;

	strcpy(Zackery_Vering->Name, "Zackery Vering");
	strcpy(Zackery_Vering->Initials, "ZV");
	//null terminate
	Zackery_Vering->Initials[3] = '0/';
	strcpy(Zackery_Vering->favArtist, "Metallica"); //zackery vering
	strcpy(Zackery_Vering->dreamCar, "Mustang GT500");
	Zackery_Vering->next_node = Tom_Burright;

	strcpy(Will_Kreiser->Name, "Will Kreiser");
	strcpy(Will_Kreiser->Initials, "WK");
	//null terminate
	Will_Kreiser->Initials[3] = '0/';
	strcpy(Will_Kreiser->favArtist, "Billy Idol"); //Will Kreiser
	strcpy(Will_Kreiser->dreamCar, "Subaru BRZ");
	Will_Kreiser->next_node = Zackery_Vering;

	strcpy(Micheal_Yost->Name, "Micheal Yost");
	strcpy(Micheal_Yost->Initials, "MY");
	//null terminate
	Micheal_Yost->Initials[3] = '0/';
	strcpy(Micheal_Yost->favArtist, "Red Hot Chili Peppers"); //micheal yost
	strcpy(Micheal_Yost->dreamCar, "Subaru WRX STI");
	Micheal_Yost->next_node = Will_Kreiser;

	strcpy(Richard_Smith->Name, "Richard Smith");
	strcpy(Richard_Smith->Initials, "RS");
	//null terminate
	Richard_Smith->Initials[3] = '0/';
	strcpy(Richard_Smith->favArtist, "Micheal Jackson"); //richard smith
	strcpy(Richard_Smith->dreamCar, "Ford F350");
	Richard_Smith->next_node = Micheal_Yost;

	//create a variable to change the initial input, as well as secondary inputs to run off of
	int initialInput;
	int secondaryInput;
	char *whichStudent[3];

	//we are going to print out a message prompting the user for a function to call
	printf("Welcome! Please select an option to display\n");
	printf("1. Display all students\n");
	printf("2. Display one type of data on all students\n");
	printf("3. Display a specific student\n");
	scanf("%d", &initialInput);

	//now lets change our response based upon a switch statement
	switch (initialInput)
	{
		//case one contains the print_all
	case 1:
		print_all(Richard_Smith, BUFFSIZE);
		break;
		//case two contains the print one data member
	case 2:
		printf("What data do you want to see?\n");
		printf("1. Initials\n");
		printf("2. Favorite Music Artist\n");
		printf("3. Dream Car\n");
		scanf("%d", &secondaryInput);
		switch (secondaryInput)
		{
		case 1:
			print_one_data(Richard_Smith, BUFFSIZE, secondaryInput);
			break;
		case 2:
			print_one_data(Richard_Smith, BUFFSIZE, secondaryInput);
			break;
		case 3:
			print_one_data(Richard_Smith, BUFFSIZE, secondaryInput);
			break;
		default:
			printf("please enter 1, 2, or 3 to select an option\n");
		}
		break;
		//case three allows the user to select a specific student
	case 3:
		printf("Please enter the initials of a student to receive their information\n");
		scanf("%s", &whichStudent);
		//null terminate the end
		whichStudent[2] = '0/';
		print_just_one(Richard_Smith, BUFFSIZE, whichStudent);
		break;
	default:
		printf("please select 1, 2, or 3 and press enter to make a selection");
	}

	return 0;
};

//how about we start with printing all the students and all of their data?
int print_all(node *n, int buffSize)
{
	if (n == NULL)
	{
		return 0;
	}
	else
	{
		while (n != NULL)
		{
			printf("%s\n %s\n %s\n %s\n", n->Name, n->Initials, n->favArtist, n->dreamCar);
			n = n->next_node;
		}
		return 1;
	}
}

//now we shall make it print out all of the students but only one data member(fav car or artist, etc.)
int print_one_data(node *n, int buffSize, int selection)
{
	//now build a switch statement to hold the chosen data member
	switch (selection)
	{
	case 1:
		while (n != NULL)
		{
			printf("%s %s\n", n->Name, n->Initials);
			n = n->next_node;
		}
		return 1;
		break;
	case 2:
		while (n != NULL)
		{
			printf("%s %s\n", n->Name, n->favArtist);
			n = n->next_node;
		}
		return 1;
		break;
	case 3:
		while (n != NULL)
		{
			printf("%s %s\n", n->Name, n->dreamCar);
			n = n->next_node;
		}
		return 1;
		break;
	default:
		printf("ERROR: please close program and try again");
		return 0;
		break;
	}
}

//now we must allow it to print a specific student and their data (im thinking student iteration?)
int print_just_one(node *n, int buffSize, char *whichStudent)
{
	//lets test to see if they entered the correct initials
	int studentCheck = 0;

	//now we will check the initials against our node
	while (n != NULL)
	{
		if ((whichStudent[0] == (n->Initials[0])) && (whichStudent[1] == (n->Initials[1])))
		{
			//correct entry
			studentCheck = 1;

			//print dat crap yo
			printf("%s %s %s %s\n", n->Name, n->Initials, n->favArtist, n->dreamCar);
			break;
		}
		else
		{		
			//next node yo
			n = n->next_node;
		}
	}

	if (studentCheck == 0)
	{
		//false entry
		printf("incorrect entry! Please close the program and try again");
		return 0;
	}
	else 
	{
		return 1;
	}
}