#include "shell.h"

/**
 * *_strncpy - function prints
 *
 * @dest: parameter that taken to be checked
 * @src: parameter that taken to be checked
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j]; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}

