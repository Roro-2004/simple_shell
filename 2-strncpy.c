#include "shell.h"

/**
 * *_strncpy - function prints
 *
 * @dest: parameter that taken to be checked
 * @src: parameter that taken to be checked
 * @n: parameter that taken to be checked
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j]; j++)
	{
		dest[j] = src[j];
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}

