#include "main.h"

/**
 *reverse_array - Reverses the contents of integer arrays
 *@a: Array of integers
 *@n: Number of elements for swap
 *Return: empty
 */
void reverse_array(int *a, int n)
{
int *p, i, aux, k;
p = a;
for (i = 1; i < n; i++)
{
p++;
}
for (k = 0; k < i; k++)
{
aux = a[k];
a[k] = *p;
*p = aux;
p--;
}
}
