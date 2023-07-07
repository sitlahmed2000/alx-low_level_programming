#include <stdio.h>
#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, ints;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	ints = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			ints = s[i] - '0';
			if (d % 2)
				ints = -ints;
			n = n * 10 + ints;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - add two positive number
 * @argc: number arguments
 * @argv: array arguents
 *
 * Return: 0 (Success), or 1 (Success)
 */
int main(int argc, char *argv[])
{
	int sum, num, n, j, k;

	sum = 0;

	for (n = 1; n < argc; n++)
	{
		for (j = 0; argv[n][j] != '\0'; j++)
		{
			if (argv[n][j] > '9' || argv[n][j] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		num = _atoi(argv[k]);
		if (num >= 0)
		{
			sum += num;
		}
	}

	printf("%d\n", sum);
	return (0);
}
