#include <stdio.h>

/**
 * main - print all alphabets
 *
 * Return: 0
 *
 */

int main(void)
{
	int i;

	char alpha[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
{
	putchar(alpha[i]);
}
	putchar('\n');
return (0);
}
