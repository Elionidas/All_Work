/*
	Using what you know from C / C++ so far, create a quick and simple print program that accomplishes the following :

	Allows user to add characters to the list
	Allows user to pop off a character
	Print each of the characters on a new line

	Do the same with a forward_list
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <list>
#include <assert.h>

//toss this map globally so it may be used by multiple functions
std::list<char> UserInput = {};
std::string Name;
std::string Title; //indented to emphasize that these are a part of employees
char Input;

int main()
{
	//Allow a user to input a person and their associated job title
	//let them add more, or find and delete someone
	int choice = 0;

	//lets allow them to put in a character
	printf("please enter a character");
	scanf("%c", &Input);

	UserInput.push_front(Input);

	printf("add more, or enter 0 to move on.");
	scanf("%c", &Input);
	switch (Input)
	{
	case 0:
		break;
	default:
		UserInput.push_front(Input);
	}
	//let them pop off
	printf("enter a character to remove");
	scanf("%c", &Input);
	for (const auto& element : UserInput)
	{

	}
}