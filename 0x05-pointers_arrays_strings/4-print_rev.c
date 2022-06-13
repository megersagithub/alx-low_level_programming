#include "main.h"

/**
 * print_rev - prints string in reverse.
 * @st: string
 */
void print_rev(char *st)
{
	int i = 0;

	while (st[i] != '\n')
		i++;
	while (i >= 0)
	{
		_putchar(st[i])
		i--;
	}
	_putchar('\n');
}
