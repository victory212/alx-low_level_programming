#include "main.h"

/**
 * _isalpha - function to check for alphabet character
 * @c: argument to check for alphabet
 * Return: 1 if an alphabet, 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
