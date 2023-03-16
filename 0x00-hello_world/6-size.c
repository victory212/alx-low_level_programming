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

	printf("size of char: %zu byte(s)\n", sizeof(c));
	printf("size of int: %zu byte(s)\n", sizeof(d));
	printf("size of long int: %zu byte(s)\n", sizeof(e));
	printf("size of long long int: %zu byte(s)\n", sizeof(f));
	printf("size of float: %zu byte(s)\n", sizeof(g));

return (0);
}
