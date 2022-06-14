#include "main.h"
#include <stdioh>
/**
*main-check the code
*
*Return: Always 0.
*/
int main(void)
{
	int n;

	n = 402;
	_putchar("n = %d\n", n);
	reset_to_98(&n);
	*n = 98;
	_putchar("n = %d\n", n);
	return (0);
}
