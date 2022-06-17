#include "main.h"

/**
 *print_to_98 - prints all natural numbers upto 98
 *followed by a new line
 *@n: print strats here
 */
void print_to_98(int n)
{
int i, j;
if (n <= 98)
{
for (i = n; n <= 98; n++)
{
if (i != 98)
printf("%d, ", i);
else if (i == 98)
printf("%d\n", i);
}
}
else if (n >= 98)
{
for (j = n; j >= 98; j--)
{
if (j != 98)
printf("%d, ", j);
else if (j == 98)
printf("%d\n", j);
}
}
}
