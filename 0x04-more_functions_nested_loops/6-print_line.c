#include "main.h"
#include <stdio.h>

/**
 *print_line - draw line using integer
 *@n: number of characters
 *Return: void
 */
void print_line(int n)
{
int i;
for (i = 0; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}
