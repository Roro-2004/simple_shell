#include"shell.h"
#include<unistd.h>
/**
 * exe - func that executes files
 * @cmd: path of comm
 * @argv: command
 * @env: env var
 * Return: exits stat
*/
int exe(char **cmd, char **argv, char **env)
{
	pid_t ch;
	int stat;

	ch = fork();
	if (ch == 0)
	{
		if (execve(cmd[0], cmd, env) == -1)
		{
			perror(argv[0]);
			free_grid(cmd);
			exit(0);
		}
	}
	else
	{
		waitpid(ch, &stat, 0);
		free_grid(cmd);
	}
	return (WEXITSTATUS(stat));
}
