#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: 1st num
 * @m: 2nd num
 *
 * Return: number of bits to changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, counter = 0;
	unsigned long int result;
	unsigned long int meemaw = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		result = meemaw >> i;
		if (result & 1)
			counter++;
	}

	return (counter);
}

