#include "main.h"

/**
 * _islower - function to check for lowercase alphabets
 * @c: argument to check
 *
 * Return: 1 on sucess and 0 if not
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
