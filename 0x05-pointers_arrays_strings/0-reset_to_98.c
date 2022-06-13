#include "main.h"
#include <stdioh>
/**
*main-check the code
*
*Return: Always 0.
*/
int main(void)
{
	int n;
	int  *p;

	n = 40;
	p = &n;
	printf("value of n is %d\n", n);
	printf("value of p is %p\n", p);
	*p = 98;
	printf("the value of n is %d\n", n);
	return (0);
}
