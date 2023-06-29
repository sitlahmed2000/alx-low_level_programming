
/**
 * _strcat - collect two string
 * @dest: the frist string
 * @src: the second string
 * Return: return the collect string
 */

char *_strcat(char *dest, char *src)
{
	int n = 0;
	int i = 0;

	while (dest[n] != '\0')
	{
		n++;
	}

	while (src[i] != '\0')
	{
		dest[n] = src[i];
		n++;
		i++;
	}

	dest[n] = '\0';
	return (dest);
}
