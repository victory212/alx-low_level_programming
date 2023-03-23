#include "main.h"

/**
 * print_numbers - function to print numbers
 * Return: 0
 */

void print_numbers(void)
{
	int i;
	char dig[] = "01234567890";

	for (i = 0; i < 9; i++)
	{
		_putchar(dig[i]);
	}
	_putchar('\n');
}
