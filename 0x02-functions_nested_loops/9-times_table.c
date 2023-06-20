#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j, l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			l = j * i;
			if (j == 0)
			{
				_putchar(l + '0');
			}

			if (l < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(l + '0');
			} else if (l >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((l / 10) + '0');
				_putchar((l % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
