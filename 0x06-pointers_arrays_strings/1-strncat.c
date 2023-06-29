/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @o: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int o)
{
	int n = 0;
	int i = 0;

	while (dest[n] != '\0')
	{
		n++;
	}
	while (src[i] != '\0' && i < o)
	{
		dest[n] = src[i];
		i++;
		n++;
	}

	dest[n] = '\0';
	return (dest);
}
