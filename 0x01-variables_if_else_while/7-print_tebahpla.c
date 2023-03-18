#include <stdio.h>

/**
 * main - Alphabets in reverse
 *
 * Return: 0
 *
 */

int main(void)
{
	char alp[] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; i < 26; i++)
{
	putchar(alp[i]);
}
	putchar('\n');
return (0);
}
