#include "main.h"

/**
 *print_numbers - print numbers 0 to 9
 *
 */
void print_numbers(void)
{
int a;
for (a = '0'; a <= '9'; a++)
print_numbers(a);
print_numbers('\n');
}
