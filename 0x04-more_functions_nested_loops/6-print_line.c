#include "main.h"

/**
 * print_line - print n number _
 * @n : number of _ to be printed
 *
 * Return: no return
 */

void print_line(int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
