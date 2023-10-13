#include "shell.h"

/**
 * _strlen - function prints
 *
 * @s: parameter that taken to be checked
 *
 * Return: size of string
 */

int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (*s != '\0')
	{
		counter++;
		s++;
	}
	return (counter);
}

