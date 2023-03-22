#include "main.h"

/**
 * print_alphabet_x10 - Print 10 times the alphabets
 *
 * return: 0
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char alpha;

	while (i <= 10)
{
	alpha = 'a';
	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
}
_putchar('\n');
i++;
}
