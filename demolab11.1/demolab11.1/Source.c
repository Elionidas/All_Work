/*
Demolab11.1
Name: Elias Perez
Date: July 25, 2018
*/

/*
assign values to two variables
declare pointer variable
assign var1 memory address to var_ptr
define var2 by deref var_ptr
compare var1 to var2 and print readable results
*/

#include <stdio.h>

int main()
{
	//declaration of local scope variables
	int var1 = 8;
	int var2 = 0;

	int *var_ptr = 0;

	var_ptr = &var1;
	var2 = *var_ptr;

	printf("%d %d", var1, var2);

	while (1);
	return 0;
}