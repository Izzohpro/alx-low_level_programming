#include "main.h"

/**
 * print_binary - prints the binary representation of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int j, counter = 0;
	unsigned long int result;

	for (j = 63; j >= 0; j--)
	{
		result = n >> j;

		if (result & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
