#include "main.h"

/**
 * reset_to_98 - function to use a pointer
 * @n: arguments
 * Return: 0
 */

void reset_to_98(int *n)
{
	int *p;

	p = &(*n);

	*p = 98;
}
