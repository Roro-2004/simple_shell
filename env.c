#include "shell.h"

/**
 * envr - function handles the path
 *
 * @var: parameter that taken to be checked
 * @env: parameter that taken to be checked
 *
 * Return: array contain the path
 */

char *envr(char *var, char **env)
{
	int i = 0;
	char *temp, *k, *val, *e;

	for (i = 0; env[i]; i++)
	{
		temp = _double(env[i]);
		k = strtok(temp, "=");
		if (_strcmp(var, k) == 0)
		{
			val = strtok(NULL, "\n");
			e = _double(val);
			free(temp);
			return (e);
		}
		free(temp);

	}
	return (NULL);
}
