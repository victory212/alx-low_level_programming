#include "main.h"

/**
 * print_rev - function to reverse strings
 * @s: arg
 * Return: 0
 */

void print_rev(char *s)
{
	int num = 0;
	int i;

	while (*s != '\0')
	{
		num++;
		s++;
	}
	s--;
	for (i = num; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
