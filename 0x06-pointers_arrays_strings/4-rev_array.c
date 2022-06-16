#include "main.h"

/**
*reverse_array - reverses the contents of integer arrays
*@a: Array of integers
*@n: Number of swap elements
*Return: empty
*/
void reverse_array(int *a, int n)
{
	int *p, i, temp;

	for (i = 0; i < n -1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = temp;
		}
	}
}
