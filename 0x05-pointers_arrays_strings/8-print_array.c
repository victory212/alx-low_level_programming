#include "main.h"

/**
 * print_array - function to print an array
 * @a: argument 1
 * @n: argument 2
 * Return: 0
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
