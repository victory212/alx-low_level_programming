#include "main.h"

/**
 * print_alphabet - prints the alphabets in lowercase
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
{
		_putchar(alpha);
}
		_putchar('\n');
}
