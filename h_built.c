#include"shell.h"
/**
 * isp - a func that returns if a no is pos or not
 *
 * @cmd: char array
 *
 * Return: 0 || 1
*/
int isp(char *cmd)
{
	int i;

	if (!cmd)
		return (0);
	for (i = 0; cmd[i]; i++)
	{
		if (cmd[i] < '0' || cmd[i] > '9')
			return (0);
	}
	return (1);
}
/**
 * exv - a func that handels exit
 * @cmd: command
 * @argv: a
 * @stat: status
 * @idx: index
*/
void exv(char **cmd, char **argv, int *stat, int idx)
{
	int exvv = (*stat);

	if (cmd[1])
	{
		if (isp(cmd[1]))
		{
			exvv = _atoi((cmd[1]));
		}
		else
		{
			error2(argv[0], cmd[1], idx);
			free_grid(cmd);
			(*stat) = 2;
			return;
		}
		free_grid(cmd);
		exit(exvv);
	}
}
/**
 * h_built - a func that handels built ins
 * @cmd: command
 * @argv: no idea
 * @env: env var
 * @stat: status
 * @idx: index
*/
void h_built(char **cmd, char **argv, char **env, int *stat, int idx)
{
	if (_strcmp(cmd[0], "exit") == 0)
	{
		exv(cmd, argv, stat, idx);
	}
	else if (_strcmp(cmd[0], "env") == 0)
	{
		p_env(cmd, stat, env);
	}
}
