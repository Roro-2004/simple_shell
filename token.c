#include "shell.h"

/**
 * token - function store all commands in a string
 *
 * @written: parameter that taken to be checked
 *
 * Return: 2d array containing the commands
 */

char **token(char *written)
{
	char *temp = NULL, *tok = NULL, **cmd = NULL;
	int co = 0, i = 0;

	if (written == NULL)
	{
		return (NULL);
	}
	temp = _double(written);
	tok = strtok(written, " \t\n");
	if (tok == NULL)
	{
		free(written);
		free(temp);
		return (NULL);
	}
	while (tok)
	{
		co++;
		tok = strtok(NULL, " \t\n");
	}
	free(written);
	cmd = malloc(sizeof(char *) * (co + 1));
	if (cmd == NULL)
	{
		free(temp);
		return (NULL);
	}
	tok = strtok(temp, " \t\n");
	while (tok)
	{
		cmd[i] = _double(tok);
		tok = strtok(NULL, DEL);
		i++;
	}
	cmd[i] = NULL;
	free(temp);
	return (cmd);
}
