#include "main.h"

/**
 *main - entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
char *n = "_putchar";
while (*n)
{
_putchar(*n);
n++;
}
_putchar('\n');

return (0);
}
