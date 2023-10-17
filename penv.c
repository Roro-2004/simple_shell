#include"shell.h"
/**
 * p_env - func that prints errors
 *
 * @cmd: command
 *
 * @stat: status of command
 *
 * @env: env var
*/
void p_env(char **cmd, int *stat, char **env)
{
	int i;

	for (i = 0; env[i]; i++)
	{
		write(STDOUT_FILENO, env[i], _strlen(env[i]));
		_putchar2('\n');
	}
	free_grid(cmd);
	(*stat) = 0;
}
