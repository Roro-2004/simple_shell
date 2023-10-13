#include "shell.h"

/**
 * *_strcat - function appends src to dest
 *
 * @dest: parameter that taken to be checked
 * @src: parameter that taken to be checked
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i])
	{
		i++;
	}
	for (j = 0; src[j]; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

