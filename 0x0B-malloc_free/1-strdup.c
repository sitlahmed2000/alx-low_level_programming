#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *abc;
	unsigned int n, len;

	n = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	abc = malloc(sizeof(char) * (len + 1));

	if (abc == NULL)
		return (NULL);

	while ((abc[n] = str[n]) != '\0')
		n++;

	return (abc);
}
