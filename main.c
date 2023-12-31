#include "shell.h"

/**
 * main - Entry point
 *
 * Description: A C code for simple shell
 *
 * @argc: parameter that taken to be checked
 * @argv: parameter that taken to be checked
 * @env: parameter that taken to be checked
 *
 * Return: 0 (Success) or status (Failure)
 */

int main(int argc, char **argv, char **env)
{
	int stat = 0, i = 0;
	char *written = NULL, **cmd = NULL;
	(void)argc;

	while (1)
	{
		written = input();
		if (written == NULL)
		{
			if (isatty(STDIN_FILENO))
			_putchar2('\n');
			return (stat);
		}
		i++;
		cmd = token(written);
		if (cmd == NULL)
		continue;
		if (is_built(cmd[0]))
			h_built(cmd, argv, env, &stat, i);
		else
		stat = exe(cmd, argv, env, i);

	}

}

