#include "main.h"

/**
 *puts2 - function with single argmt
 *@str: char pointer
 *
 *Description: print 1 char out of two of string
 *Return: none
 */
void puts2(char *str)
{
int i = 0;
while (*(str + i) != '\0')
{
if (i % 2 == 0)
{
_putchar(*(str + i));
}
i++;
}
_putchar('\n');
}
