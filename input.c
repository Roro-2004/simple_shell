#include "shell.h"

/**
 * input - function takes an input from user
 *
 * Return: a string for the input
 */

char *input(void)
{
	char *result = NULL;
	size_t l = 0;
	int num;
	char prompt[] = {'$', ' '};

	if (isatty(STDIN_FILENO))
	{
		put(prompt);
	}
	num = getline(&result, &l, stdin);
	if (num == -1)
	{
		free(result);
		return (NULL);
	}
	return (result);
}
