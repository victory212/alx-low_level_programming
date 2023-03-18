#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - determine the nature of the last digit
 *
 * Return: always 0
 *
 */

int main(void)
{
	int n, b;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	b = n % 10;

	printf("Last digit of %i is %i ", n, b);
if (b > 5)
{
	printf("and is greater than \n");
}
else if ((b < 6) || (b ==!0))
{
	printf("and is less than 6 and not 0\n");
}
else
{
	printf("and is 0\n");
}
	
	return (0);
}
