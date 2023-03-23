#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: argument
 * Return: 1 if a digit and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
