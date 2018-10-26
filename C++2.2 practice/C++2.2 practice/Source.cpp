/*
    Print out "Hello World!"
    Print the length of the string
    Create a substring of "Hello World!" and make it only contain "Hello"
        Print that substring out
    Find the "r" in "Hello World!"
        Print out it's position
    On the "Hello" substring, append your name.
        Print out the substring
*/

#include <iostream>
#include <string>

int main()
{
	std::string helloWorld("Hello World!");
	std::string name("EliasPerez");
	auto name_length = helloWorld.length();
	std::cout << helloWorld << std::endl;
	std::cout << name_length << std::endl;
	auto rpos = helloWorld.find("r");
	std::cout << "r found at: " << rpos << std::endl;
	auto substring = helloWorld.substr(0, 5);
	std::cout << substring << std::endl;
	auto stringAppend = substring.append(name);
	std::cout << "appended string: " << stringAppend << std::endl;

	return 0;
}