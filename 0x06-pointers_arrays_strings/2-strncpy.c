#include "main.h"

/**
 * strncpy - copying string
 * @dest: Destination value
 * @src: source value
 * @n: copying limit
 *
 * Return: char value
 */
char *_strncpy(char *dest, char *src, int n)
{
int a = 0, b = 0;
while	(src[b])
{
b++;
}
while	(a < n && src[a])
{
dest[a] = src[a];
a++;
}
while	(a < n)
{
dest[a] = '\0';
a++;
}
return (dest);
}
