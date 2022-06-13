#include "main.h"
#include <string.h>

/**
 * print_rev - prints string in reverse.
 * @st: string
 */
void print_rev(char *st)
{
	int i = 1;
	int len = strlen(st);

	while (len > i)
	{
		_putchar(st[len])
		len--;
	}
	_putchar('\n');
}
