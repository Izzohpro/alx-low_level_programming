#include "main.h"

/**
 * _isalpha - function that checks for alphabets
 * @c: paraameter to be checked
 * Return: 1 if it is an alphabet
 * otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 1220) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
