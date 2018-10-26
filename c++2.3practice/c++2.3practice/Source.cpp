/*
Using what you know from C/C++ so far, create a quick program that accomplishes the following:

Create a UI to accomplish all functionality
Allow a user to input a person and their associated job title
Allow a user to find a person based on name
Allow a user to delete this person
Allow the user to input more people

*/
#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string>
#include <map>
#include <assert.h>
using namespace std;

//function declarations
std::string add_name();
std::string add_title();
void find_person(std::string);

//toss this map globally so it may be used by multiple functions
std::map<std::string, std::string> employees;
	std::string Name;
	std::string Title; //indented to emphasize that these are a part of employees

int main()
{
	//Allow a user to input a person and their associated job title
	//let them add more, or find and delete someone
	int choice = 0;

	//lets allow them to put in a person
	printf("What do you want to do?\n 1.Add Someone\n 2.Find Someone\n");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		Name = add_name();
		Title = add_title();
		employees.emplace(Name, Title);
	case 2:
		find_person(Name);
		printf("Want to add someone? press 1 to confirm or 2 to deny.");
		scanf("%d", &choice);
		if (choice == 1)
		{
			Name = add_name();
			Title = add_title();
			employees.emplace(Name, Title);
		}
		break;
	}
}

//add someone
std::string add_name()
{
	printf("Please enter an employee name\n");
	cin >> Name;

	return Name;
}
//add their title
std::string add_title()
{
	printf("Please enter an employee job title\n");
	cin >> Title;

	return Title;
}
//find someone
void find_person(std::string)
{
	int selection = 0;

	printf("Please enter an employee name to search for.\n");
	cin >> Name;
	printf("do you want them gone? 1 for yes, 2 for no.\n");
	cin >> selection;
	switch (selection)
	{
	case 1:
		for (const auto& element : employees)
		{
			if (Name == element.first)
			{
				employees.erase(Name);
				break;
			}
		}
	case 2:
		break;
	}
}