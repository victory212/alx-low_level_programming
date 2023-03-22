#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print natual numbers till 98 from n
 * @n: range of numbers
 * Return: 0
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%i ,", n--);
		printf("%i\n", n);
	}
	else
	{
		while (n < 98)
			printf("%i ,", n++);
		printf("%i\n", n);
	}
}
