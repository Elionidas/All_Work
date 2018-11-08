/*
PerformanceLab7_2D.c
Name: Elias Perez
Date: 17th July 2018
*/

/*
Write a program that will evaluate a simple math formula.
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

int main()
{
	//Input the formula with two integers separated by an arithmetic operator from one line.
	//Example: 1 + 1, (-8) - 3, 2 * (-7), (-15) / (-4) NOTE : Scan the arithmetic operator as a char
	int numOne = 0, numTwo = 0;
	double numThree = 0;
	char artOperator;
	printf("Please enter two numbers seperated by an operator (+, -, *, /)\n");
	scanf("%d%c%d", &numOne, &artOperator, &numTwo);

	//Use a switch statement to print the correct value using the operators as cases.
	switch (artOperator)
	{
	case '+':
		numThree = numOne + numTwo;
		printf("The result is %.0lf!\n", numThree);
		break;

	case '-':
		numThree = numOne - numTwo;
		printf("The result is %.0lf!\n", numThree);
		break;

	case '*':
		numThree = numOne * numTwo;
		printf("The result is %.0lf!\n", numThree);
		break;

	case '/':	//Ensure any division provides a double answer with a precision of two decimal places.
		numThree = (float)numOne / (float)numTwo;
		printf("The result is %.2lf!\n", numThree);
		break;

	default:	//Set the default condition to an error.
		printf("There was an error. Please exit and try again\n");
		break;
	}

	while (1);
	return 0;
}