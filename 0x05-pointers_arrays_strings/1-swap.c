#include "main.h"
/**
 *swap_int - function with two type pointer argmt
 *@a: 1st argmt int type
 *@b: 2nd argmt int type
 *
 *Description: using ponter to change values
 *Return: void
 */
void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
