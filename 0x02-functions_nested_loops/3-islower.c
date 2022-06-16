#include "main.h"
/**
 *_islower - a function that checks for lowercase letter
 *@c: single letter input
 *Return: 1 if c is lower, 0 if uppercase
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
