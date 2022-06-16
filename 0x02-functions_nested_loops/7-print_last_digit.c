#include "main.h"
/**
 *print_last_digit - function print last digit of value
 *@nld: last digit
 *Return: Value of last digit
 */
int print_last_digit(int nld)
{
int pld;
pld = (nld % 10);
if (pld < 0)
{
pld = (-1 * pld);
}
_putchar(pld + '0');
return (pld);
}
