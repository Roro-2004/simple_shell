#include "shell.h"

/**
 * _double - function doublicates a string
 *
 * @str: parameter that taken to be checked
 *
 * Return: a new string containing the double
 */

char *_double(const char *str)
{
	char *str2;
	int i = 0, l = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		l++;
		i++;
	}
	str2 = (char *)malloc(sizeof(char) * (l + 1));
	if (str2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= l; i++)
	{
		str2[i] = str[i];
	}
	return (str2);
}
