#include"shell.h"
#include<unistd.h>
/**
 * exe - func that executes files
 * @cmd: path of comm
 * @argv: command
 * @env: env var
 * Return: exits stat
*/
int exe(char **cmd, char **argv, char **env, int i)
{
	char *full;
	pid_t ch;
	int stat;

	full = pathh(cmd[0], env);
	if (full == NULL)
	{
		error(argv[0], cmd[0], i);
		free_grid(cmd);
		return (127);
	}
	ch = fork();
	if (ch == 0)
	{
		if (execve(full, cmd, env) == -1)
		{
			free_grid(cmd);
			free(full);
		}
	}
	else
	{
		waitpid(ch, &stat, 0);
		free(full);
		free_grid(cmd);
	}
	return (WEXITSTATUS(stat));
}

