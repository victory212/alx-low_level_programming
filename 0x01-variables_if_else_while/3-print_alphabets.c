#include <stdio.h>

/**
 * main - Printing Upper and lowercase alpha
 *
 * Return: 0
 *
 */

int main(void)
{
	char low[] = "abcdefghijklmnopqrstuvwxyz";
	char upp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int i;

	for (i = 0; i < 26; i++)
{
	putchar(low[i]);
}
	for (i = 0; i < 26; i++)
{
	putchar(upp[i]);
}
	putchar('\n');
return (0);
}
