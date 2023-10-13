#include"shell.h"
#include<unistd.h>
/**
 * put - a func that prints string
 * @r: string
 * Return: str len
*/
int put(char *r)
{
	int i;

	if (r)
	{
	for (i = 0; r[i]; i++)
	{
		_putchar2(r[i]);
	}
	}
	return (i);
}
