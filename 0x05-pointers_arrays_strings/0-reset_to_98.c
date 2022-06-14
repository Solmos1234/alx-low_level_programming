#include <stdio.h>
void reset_to_98(int *);
/**
*main-check the code
*
*Return: Always 0.
*/

int main()
{
	int n;

	n = 402;
	putchar("n=%d\n", n);
	reset_to_98(&n);
	putchar("n=%d\n", n);
	return (0);
}
