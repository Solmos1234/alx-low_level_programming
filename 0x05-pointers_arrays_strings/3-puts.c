#include "main.h"

/**
 *_puts - function with one argmt
 *
 *@str: mone char type
 *
 */
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
