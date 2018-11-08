#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <map> // A map will be used to count the words.
#include <fstream> // Will be used to read from a file.
#include <string> // The map's key value.
#include <vector>
using namespace std;

string getFName();

class Person {
	string first_name;
	string last_name;
	string gender;
	//add constructors
public:
	Person() {}
	Person(string & f, string & l, string & g) : first_name(f), last_name(l), gender(g) { }
};

//create array of classes
Person FullClass[1] = {};

//lets add ourselves public functions that let us input data into the class
string getFName()
{
	string firstName;
	cout << "Please enter a first name \n" << endl;
	scanf("%s", firstName);
	return firstName;
}

string getLName()
{
	string lastName;
	cout << "Please enter a last name \n" << endl;
	scanf("%s", lastName);
	return lastName;
}

string getGender()
{
	string gender;
	cout << "Please enter a gender \n" << endl;
	scanf("%s", gender);
	return gender;
}

//master function that builds the student profile to add to the class array