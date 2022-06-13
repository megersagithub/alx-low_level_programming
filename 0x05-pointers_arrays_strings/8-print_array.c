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
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
