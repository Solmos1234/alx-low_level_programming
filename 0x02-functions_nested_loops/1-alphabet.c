#include<stdio.h>
/**
*print_alphabet - prints lowercase letters
*
*main: check the code for Holberton School student
*Return: Always 0 (Success)
*/

void _putchar()
{
	int i;
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar("\n");
}
