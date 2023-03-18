#include <stdio.h>

/**
 * main - Printing Hex
 *
 * Return: 0
 */

int main(void)
{
	char num[] = "0123456789";
	char alp[] = "abcdef";
	int i;

	for (i = 0; i <= 9; i++)
{
	putchar(num[i]);
}
	for (i = 0; i <= 5; i++)
{
	putchar(alp[i]);
}
	putchar('\n');
return (0);
}
