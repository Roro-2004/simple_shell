#include "shell.h"

/**
 * intstr - function converts int to string
 *
 * @num: parameter that taken to be checked
 *
 * Return: string represents an int
 */

char *intstr(int num)
{
	int i = 0;
	char arr[20];

	if (num == 0)
	{
		arr[i++] = '0';
	}
	else
	{
		while (num > 0)
		{
			arr[i++] = (num % 10) + '0';
			num /= 10;
		}
	}
	arr[i] = '\0';
	reverse_array(arr, i);
	return (_double(arr));
}
