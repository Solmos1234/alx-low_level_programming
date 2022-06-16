#include "main.h"
/**
 *print_sign - function that prints sign of a number
 *@n: input number
 *Return: 1 prints + if n > 0, if n = 0, -1 prints '_' if n < 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('_');
return (-1);
}
}

