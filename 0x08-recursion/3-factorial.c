#include "main.h"
/**
 * factorial - Function that returns the factorial of a given number
 * @n: The number to fine the factorial of
 * Return: if n is greater than 0 the factorial of n
 */

int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	result *= factorial(n - 1);

	return (result);
}
