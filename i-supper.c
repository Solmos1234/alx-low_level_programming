#include "main.h"
#include <stdio.h>

/**
*main - check the code
*
* Return: Always 0.
*/
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", isupper_l (c));
	printf("%c: %d\n", c, isupper_l (c));
	return (0);
}
