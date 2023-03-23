#include "main.h"

/**
 * _isupper - function to print upper case char
 * @c: arguments
 * Return: 1 if uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
