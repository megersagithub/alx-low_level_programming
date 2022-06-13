#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of array.
 * @a: input array value
 * @n: number of elements
 *
 * Return: no return.
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
	}
	printf('\n');
}
