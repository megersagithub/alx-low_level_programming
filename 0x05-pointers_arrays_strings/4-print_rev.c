#include "main.h"

/**
 * print_rev - prints string in reverse.
 * @st: string
 */
void print_rev(char *st)
{
	int i = 0;
	int len = strlen(st);

	while (len > 0)
	{
		_putchar(st[len]);
		len--;
	}
	_putchar('\n');
}
