#include "main.h"

/**
 * print_sign - function to print sign
 * @n: argument
 * Return: 1 and prints + , 0 and prints zero , -1 and prints -
 */

int print_sign(int n)
{
	if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
