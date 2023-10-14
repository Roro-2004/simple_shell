#include "shell.h"

/**
 * main - Entry point
 *
 * Description: A C code for simple shell
 *
 * @argc: parameter that taken to be checked
 * @argv: parameter that taken to be checked
 *
 * Return: 0 (Success) or status (Failure)
 */

int main(int argc, char **argv, char **env)
{
	int stat = 0;
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
		cmd = token(written);
		if (cmd == NULL)
		continue;
		stat = exe(cmd, argv, env);

	}

}
