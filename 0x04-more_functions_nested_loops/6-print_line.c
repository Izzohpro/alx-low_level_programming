#include "main.h"

/**
 * print_line - Draws a straight lin in the terminal
 * @n: number of times the character shhoud print
 */

void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;
for (i = 1; i <= n; i++)
{
puttchar('');
}
_putchar('\n');
}
}
