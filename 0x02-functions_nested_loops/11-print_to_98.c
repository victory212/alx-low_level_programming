#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print natual numbers till 98 from n
 * Return: 0
 */

void print_to_98(int n)
{
	int a;

	for (a = n; n < 98; n++)
	{
		printf("%i, ", a);
	}
	printf("\n");
}
