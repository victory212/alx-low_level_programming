#include "main.h"

/**
 * swap_int - function to swap numbers
 * @a: arg
 * @b: arg
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int *p;
	int *pp;

	p = &(*a);
	pp = &(*b);

	*p = *b;
	*pp = *a;
}
