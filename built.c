#include"shell.h"
/**
 * is_built - func that compares string to res words
 *
 * @cmd: the given command
 *
 * Return: 1 if they are equal 0 if not
*/
int is_built(char *cmd)
{
	char *arr[] = {"exit", "env", "setenv", "cd", NULL};
	int i;

	for (i = 0; arr[i]; i++)
	{
		if (_strcmp(cmd, arr[i]) == 0)
		{
			return (1);
		}
	}
	return (0);
}
