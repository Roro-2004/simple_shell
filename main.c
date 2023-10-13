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

int main(int argc, char **argv)
{
	char *written = NULL, **cmd = NULL;
	(void)argc;
	(void)argv;
	

	while (1)
	{
		written = input();
		if (written == NULL)
		{
			if (isatty(STDIN_FILENO))
			_putchar2('\n');
			return (0);
			/*return(status); mo2ktn*/
		}
		cmd = token(written);
		if (cmd == NULL)
		continue;
		free_grid(cmd);
	}

}
