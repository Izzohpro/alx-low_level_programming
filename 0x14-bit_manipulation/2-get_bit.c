#include "main.h"

/**
 * get_bit - gets the value of a bit at an index in a decimal number
 * @n: the bit
 * @index: index of the bit
 *
 * Return: value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 63)
		return (-1);

	val = (n >> index) & 1;

	return (val);
}
