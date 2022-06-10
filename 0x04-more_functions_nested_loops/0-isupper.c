#include "main.h"
#include <stdio.h>

/**
*main - check the code.
*
* *Return: Always 0.
*/
int main (void)
{
	char c;

	c = 'A';
	if (isupper(c))
	{
		printf("\nA is uppercase");
	}
	c = 'a';
	if (isupper(c))
	{
		printf("\na is lowercase");
	}
	return (0);
}
