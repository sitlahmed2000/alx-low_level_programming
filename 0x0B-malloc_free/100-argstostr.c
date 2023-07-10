#include "main.h"
#include <stdlib.h>
/**
  *argstostr - concatenate all arguments the program.
  *@ac: argument count.
  *@av: pointer array size ac.
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on fail.
  */
char *argstostr(int ac, char **av)
{
	int n, j, k, size;
	char *arg;

	size = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (n < ac)
	{
		j = 0;
		while (av[n][j])
		{
			size++;
			j++;
		}
		size++;
		n++;
	}
	arg = malloc((sizeof(char) * size) + 1);
	if (arg == NULL)
		return (NULL);
	n = 0;
	while (n < ac)
	{
		j = 0;
		while (av[n][j])
		{
			arg[k] = av[n][j];
			j++;
			k++;
		}
		arg[k] = '\n';
		k++;
		i++;
	}
	arg[k] = '\0';
	return (arg);
}
