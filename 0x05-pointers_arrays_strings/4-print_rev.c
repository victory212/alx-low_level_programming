#include "main.h"

/**
 * print_rev - function to reverse strings
 * @s: arg
 * Return: 0
 */

void print_rev(char *s)
{
	/* num acts as a counter */

	int num = 0;
	int i;

	while (*s != '\0')
	{
		num++;
		s++;
	}
	s--;

	/* the loop can be interpreted as saying i starts at the counter */

	for (i = num; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
