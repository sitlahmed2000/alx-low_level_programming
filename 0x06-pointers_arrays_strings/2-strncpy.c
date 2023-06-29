/**
 * _strncpy - fucntion copy string from place to others
 * @dest: the place that will past it
 * @src: the string will copy it
 * @n: how many letters will copy them
 * Return: return the dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (dest);
}
