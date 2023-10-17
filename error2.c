#include "shell.h"

/**
 * error2 - function prints error message
 *
 * @n: parameter that taken to be checked
 * @command: parameter that taken to be checked
 * @index: parameter that taken to be checked
 */

void error2(char *n, char *command, int index)
{
	char *i, msg[] = "exit: Illegal number: ";

	i = intstr(index);
	write(STDERR_FILENO, n, _strlen(n));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, i, _strlen(i));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, msg, _strlen(msg));
	write(STDERR_FILENO, command, _strlen(command));
	_putchar2('\n');
	free(i);
}
