#include "shell.h"

/**
 * error - function prints error message
 *
 * @n: parameter that taken to be checked
 * @command: parameter that taken to be checked
 * @index: parameter that taken to be checked
 */

void error(char *n, char *command, int index)
{
	char *i, msg[] = ": not found\n";

	i = intstr(index);
	write(STDERR_FILENO, n, _strlen(n));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, i, _strlen(i));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, command, _strlen(command));
	write(STDERR_FILENO, msg, _strlen(msg));
	free(i);
}
