#include "main.h"

/**
 * _strlen - function to tell the length of a string
 * @s: arg
 * Return: length
 */

int _strlen(char *s)
{
	int lg = 0;

	while (*s != '\0')
	{
		lg++;
		s++;
	}
	return (lg);
}
