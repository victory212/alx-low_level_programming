#include "main.h"

/**
 * print_rev: - function to reverse strings
 * @s: arg
 * Return: 0
 */

void print_rev(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s--);
	}
	_putchar('\n');
}
