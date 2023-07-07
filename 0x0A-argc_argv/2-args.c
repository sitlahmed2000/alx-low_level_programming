#include <stdio.h>
#include "main.h"

/**
 * main - print all arguments it receives
 * @argc: number  arguments
 * @argv: array arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}

	return (0);
}
