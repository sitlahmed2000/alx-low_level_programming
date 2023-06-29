/**
 *
 */

char *_strncat(char *dest, char *src, int o)
{
	int n = 0;
	int i = 0;

	while (dest[n] != '\0')
	{
		n++;
	}
	while (src[i] != '\0' && n < o)
	{
		dest[n] = src [i];
		i++;
		n++;
	}

	return (dest);
}
