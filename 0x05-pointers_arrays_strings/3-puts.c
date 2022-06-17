#include "main.h"

/**
 *_puts - function with one argmt
 *@str: mone char type
 *
 *Description: print a string followed by anew line
 *Return: none
 */
void _puts*(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
