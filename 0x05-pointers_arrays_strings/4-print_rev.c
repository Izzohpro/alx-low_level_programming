#include "main.h"
#include "_putchar.c"
/**
 * print_rev - print reversal
 * @s: string
 * return: 0 always
 */
void print_rev(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o =  longi; o > 0; o--)
	{
		s--;
	}
	_putchar('\n');
}
