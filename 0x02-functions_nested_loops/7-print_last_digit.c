#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @r: digit to compute
 * Return: the last digit
 *
 */

int print_last_digit(int r)
{
	int a =	r % 10;

	if (a < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}
