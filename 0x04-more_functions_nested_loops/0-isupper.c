#include "main.h"
#include <stdio.h>

/**
*main - check the code.
*
* *Return: Always 0.
*/
int main (void)
{
	char ch = 'A';

	if (isupper(ch))
		printf("\nEntered character is uppercase character");
	else
		printf("\nEntered character is not uppercase");
	return (0);
}
