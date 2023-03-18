#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Determine if a number is negative, positive, or Zero.
 *
 * Return: Always o
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else
	{
		printf("%i is negative\n", n);
	}

return (0);
}
