#include "shell.h"

/**
 * _strcmp - function prints
 *
 * @s1: parameter that taken to be checked
 * @s2: parameter that taken to be checked
 *
 * Return: comparison result
 */

int _strcmp(char *s1, char *s2)
{
	int i, sum;

	for (i = 0; s1[i] && s2[i]; i++)
	{
		sum = s1[i] - s2[i];
		if (sum != 0)
			return (sum);
	}
	return (sum);
}

