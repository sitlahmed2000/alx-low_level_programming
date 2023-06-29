
/**
 * _strcat - collect two string
 * @dest: the frist string
 * @src: the second string
 * Return: return the collect string
 */

char *_strcat(char *dest, char *src)
{
	char *result;
	int n = 0;
	int i = 0;

	while (dest[n] != '\0')
	{
		result += dest[n];
		n++;
	}

	while (src[i] != '\0')
	{
		result += src[i];
		i++;
	}

	dest = result;
	return (dest);
}
