#include "main.h"
#include <stdio.h>
void reset_to_98(int *);
int _putchar(char n);
/**
*main-check the code
*
*Return: Always 0.
*/

int main()
{
	int n;

	n = 402;
	_putchar("n=%d\n", n);
	reset_to_98(&n);
	return (0);
}
