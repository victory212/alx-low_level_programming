#include "main.h"

/**
 * swap_int - function to swap numbers
 * @a: arg
 * @b: arg
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
