#include "shell.h"

/**
 * reverse_array - function prints
 *
 * @a: parameter that taken to be checked
 * @n: parameter that taken to be checked
 *
 */

void reverse_array(char *a, int n)
{
	char arr[1000];
	int i, temp;

	temp = n - 1;
	for (i = 0; i < n; i++)
	{
		arr[i] = a[temp];
		temp--;
	}
	for (i = 0; i < n; i++)
	{
		a[i] = arr[i];
	}
}

