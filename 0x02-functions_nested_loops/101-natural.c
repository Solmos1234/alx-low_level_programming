#include <stdio.h>

/**
 *main - prints all multiples
 *@void: void
 *Return: Success
 */
int main(void)
{
int n;
int sum = 0;
for (n = 0; n <= 1024; n++)
{
if (n % 3 == 0 || n % 5 == 0)
{
sum += n;
}
}
printf("%d\n", sum);
return (0);
}
