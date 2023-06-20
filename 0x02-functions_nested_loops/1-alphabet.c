#include <stdio.h>
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
}
/**
 * main - print alphabet in lowercase
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}
