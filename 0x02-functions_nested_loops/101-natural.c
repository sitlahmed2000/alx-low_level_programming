#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1, n2, n3, i;

	n1 = 0;
	n2 = 0;
	n3 = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			n1 = n1 + i;
		} else if ((i % 5) == 0)
		{
			n2 = n2 + i;
		}
	}
	n3 = n1 + n2;
	printf("%d\n", n3);
	return (0);
}
