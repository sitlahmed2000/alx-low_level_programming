/**
 * _strcmp - compares two strings
 * @str1: the first string
 * @str2: the second string
 * Return: the finally string
 */


int _strcmp(char *str1, char *str2)
{

	while (*str1 != '\0' && *str2 != '\0')
	{
		if (*str1 != *str2)
		{
			return (*str1 - *str2);
		}
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

