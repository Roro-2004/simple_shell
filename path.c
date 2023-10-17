#include "shell.h"

/**
 * pathh - function gets the path of a command
 *
 * @cmd: parameter that taken to be checked
 *
 * @envv: env var
 *
 * Return: path of the command
 */

char *pathh(char *cmd, char **envv)
{
	int i;
	char *env, *full, *directory;
	struct stat s;

	for (i = 0; cmd[i]; i++)
	{
		if (cmd[i] == '/')
		{
			if (stat(cmd, &s) == 0)
			{
				return (_double(cmd));
			}
			return (NULL);
		}
	}
	env = envr("PATH", envv);
	if (env == NULL)
	{
		return (NULL);
	}
	directory = strtok(env, ":");
	while (directory)
	{
		full = malloc(_strlen(directory) + _strlen(cmd) + 2);
		if (full)
		{
			_strncpy(full, directory);
			_strcat(full, "/");
			_strcat(full, cmd);
			if (stat(full, &s) == 0)
			{
				free(env);
				return (full);
			}
			free(full);
			directory = strtok(NULL, ":");
		}
	}
	free(env);
	return (NULL);
}
