/*
TowerOfHanoi
Name: Elias Perez
Date: August 9th, 2018
*/

//remember those little tower exercises from rise of the planet of the apes?
//yuuup, they're back. TowerOfHanoi 2, Hanoi Harder

#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <fstream>
#include <string>
#include <stack>
#include <vector>

int Setup(std::stack<int>& tower, int n);
void Hanoi(std::stack<int>& source, std::stack<int>& dest, std::stack<int>&, int n);
void display(std::stack<int> tower);
static int numMoves = 0;

int main()
{
    std::stack<int> TowerA;
    std::stack<int> TowerB;
    std::stack<int> TowerC;

    int n = 0;      //Number of discs

    n = Setup(TowerA, n);
    Hanoi(TowerA, TowerB, TowerC, n);
    std::cout<<"Displaying contents of tower A: " << std::endl;
    display(TowerA);
    std::cout<<"Displaying contents of tower B: " << std::endl;
    display(TowerB);
    std::cout<<"Displaying contents of tower C: " << std::endl;
    display(TowerC);
    std::cout<<"Number of steps to solve: " << numMoves << std::endl;

	while(1);
}

//Arguments: std::stack<int>& towerA - a stack container that will be setup with a number of discs 
//           int n - a number that represents the number of discs to load on to the tower stack
//Return     the number of discs that were loaded on to the tower 
//Functionality: Load a number of discs in ascending order on to the stack 
int Setup(std::stack<int>& tower, int n)
{
	//declare input
	printf("Please enter a number of discs to be used for the tower of hanoi\n");
	scanf("%d", &n);
	//we receive the input, then prepare the tower by placing the number of discs on tower A
	for (int i = n; i > 0; i--)
	{
		tower.push(i);
	}
	return n;
}

//Arguments: std::stack<int>& source - the tower that discs will be moved from
//           std::stack<int>& dest - the twoer that discs will be moved to 
//           std::stack<int>& temp - a tower that can hold discs 
//           int n - the number of discs on the source tower
//Return     none
//Functionality: Move a tower from source to another tower. 
void Hanoi(std::stack<int>& source, std::stack<int>& dest, std::stack<int>& temp, int n)
{
	//so the algorithim for the tower of hanoi is (2^n-1), where n is the number of disks
    //hanoi... sounds like an anime character.... but like a gay, flambouyant one

	//saw a recursive function call that kreiser built. gonna use my own version because thats WAY better than what i was gonna do
	if (n == 1) //start on first move
	{
		dest.push(source.top()); //move the first disc
		numMoves++;
		source.pop(); //pull it off the first rod
	}
	else //here is where the big stuff happens 
	{
		Hanoi(source, temp, dest, n - 1);
		dest.push(source.top()); //this recursive function causes the discs to continously be moved around
		source.pop();
		Hanoi(temp, dest, source, n - 1);
		numMoves++;
	}
}

//Arguments: std::stack<int>& tower - a tower that has discs to display
//Return     none
//Functionality: Display the contents of a tower
void display(std::stack<int> tower)     
{
	//lets build a loop to display the tower off of.
	while (!tower.empty()) //nifty little trick that counts as a null
	{
		std::cout << tower.top() << " " << std::endl;
		tower.pop(); //continue down the tower, proving that its where its supposed to be
	}
}