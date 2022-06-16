#include "main.h"

/**
 *print_number - prints any number with putchar
 *@n: Numbers to print
 *
 *Return: None
 */
void print_number(int n)
{
long m;
int c;
long num;
num = n;
if (num < 0)
{
num *= -1;
_putchar('_');
}
m = 1;
c = 1;
while (c)
{
if (num / (m * 10) > 0)
m *= 10;
else
c = 0;
}
while (num >= 0)
{
if (m == 1)
{
_putchar(num % 10 + '0');
num = -1;
}
else
{
_putchar((num / m % 10) + '0');
m /= 10;
}
}
}
