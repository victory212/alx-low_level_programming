#include "main.h"

/**
 * _puts - function to compute a string
 * @str: arg
 * Return: 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
	}
	_putchar('\n');
}
