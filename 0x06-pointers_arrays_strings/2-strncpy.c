/**
 * _strncpy - fucntion copy string from place to others
 * @dest: the place that will past it
 * @src: the string will copy it
 * @n: how many letters will copy them
 * Return: return the dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
