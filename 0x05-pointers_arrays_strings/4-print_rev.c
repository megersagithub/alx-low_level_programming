#include "main.h"

/**
 * print_rev - prints string in reverse.
 * @st: string
 */
void print_rev(char *st)
{
	int i = 0;

	while (st[i])
		i++;
	while (i--)
	{
		_putchar(st[i])
	}
	_putchar('\n');
}
