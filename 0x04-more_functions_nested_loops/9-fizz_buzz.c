#include <stdio.h>
#include "main.h"

/**
 *main - entry point
 *
 *Description: print number 1 - 100
 *fizz multiples of 3, buzz multiples of 5
 *and fizzbuzz multiplse of both
 *
 *Return: Always 0.
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
printf("FizzBuzz");
else if (i % 3 == 0)
printf("Fizz");
else if (i % 5 == 0)
printf("Buzz");
else
printf("%i", i);
if (i < 1001)
printf(" ");
}
printf("\n");
return (0);
}
