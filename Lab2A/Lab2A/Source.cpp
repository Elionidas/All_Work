/*
Provided a text file, use the STL to read from it and count each occurrence of each word. Once complete, output to **stdout **each word, and the number of times it occurred. 
Sort the output by words that occured the most to words that occured the least.

You will write this program in its entirety. There will be no source code provided by the instructor, only a text file containing the input.

The instructional goal of this lab is to give you practice using the STL. Use STL containers, algorithms, and iterators where they would be helpful.
STL 	3
C++ 	2
Python 	1
x86 	3
Java 	0
*/

#define _CRT_SECURE_NO_WARNINGS 1​
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std; //bad practice, but its making some of these things work properly

//throw a template into global so we can use it in the alternate print function
//first we need to set a few variables. im thinking a map
template <class FirstWord, class SecondWord>

void PrintMap(map<FirstWord, SecondWord> map)
{
	typedef std::map<FirstWord, SecondWord>::iterator iterator;
	for (iterator p = map.begin(); p != map.end(); p++)
		cout << p->first << " " << p->second << endl; //here is how we will output our text, so that it shows each word with associated count
}

int main()
{
	//we gotta count each word in the song, comparing it to the others and seeing how many times the word occurs
	static const char* fileName = "lyrics.txt";

	//stores the word and count.
	map<string, unsigned int> wordsCount;
	{
		//reeeeading. iiiinput.
		ifstream fileStream(fileName);

		//Check if the file opened properly
		if (fileStream.is_open())
			while (fileStream.good()) //found this on cplusplus. its pretty neat, and checks if the stream has any problems
			{
				//Store the next word in the file in a local variable, like pointing to the next node in the list
				string word;
				fileStream >> word; //pushes onward to the next word in the textfile

				//check for the word already being recorded
				if (wordsCount.find(word) == wordsCount.end()) //encountered word for a first time, yay!
					wordsCount[word] = 1; //set that words count to 1.
				else 
					wordsCount[word]++; //if it already exists, we are gonna add to the count
			}
		else  //in case it fails....
		{
			cout << "Couldn't open the file." << endl; 
		}
		//lets sort the output first from most words to least, by iterating through the map
		//create a compare variable against the content stored in wordsCount
		// Print the result of all our searches
		PrintMap(wordsCount);
	}
	while (1);
}