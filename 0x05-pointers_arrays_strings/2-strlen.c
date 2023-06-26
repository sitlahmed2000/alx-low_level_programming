
/**
 * _strlen - counting length of the array
 * @s: The array coming from outside
 * Return: return n
 */

int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}
