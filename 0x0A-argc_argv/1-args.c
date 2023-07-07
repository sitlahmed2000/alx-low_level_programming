#include <stdio.h>
#include "main.h"

/**
 * main - print the numbers arguments passed to the program
 * @argc: number arguments
 * @argv: array arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
