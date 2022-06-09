#include "main.h"

/**
 * print_square - prints square.
 * @n : number
 *
 * Return: no return
 */

void print_square(int n)
{
	int i = 0, j;

	while (i < n && n > 0)
	{
		j = 0;
		while (j < n)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
												}
	if (i == 0)
		_putchar('\n');
}
