#include <stdio.h>
/**
 * main - print alphabet letters
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c, n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
