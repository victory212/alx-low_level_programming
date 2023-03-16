#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 *
 */

int main(void)
{
	char c;
	int d;
	long int e;
	long long int f;
	float g;

	printf("size of a char: %zu byte(s)\n", sizeof(c));
	printf("size of an int: %zu byte(s)\n", sizeof(d));
	printf("size of a long int: %zu byte(s)\n", sizeof(e));
	printf("size of a long long int: %zu byte(s)\n", sizeof(f));
	printf("size of a float: %zu byte(s)\n", sizeof(g));

return (0);
}
