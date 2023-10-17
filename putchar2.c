#include<unistd.h>
#include"shell.h"
/**
 * _putchar2 - a func that prints a char
 * @s: a string
 * Return: a char
*/
int _putchar2(char s)
{
	return (write(STDOUT_FILENO, &s, 1));
}
