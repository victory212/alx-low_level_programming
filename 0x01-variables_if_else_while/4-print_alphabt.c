#include <stdio.h>

/**
 * main - Print all alphabets except q and e
 *
 * Return: 0
 *
 */

int main(void)
{
	char low[] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
{
	putchar(low[i]);
}
	putchar('\n');
return (0);
}
