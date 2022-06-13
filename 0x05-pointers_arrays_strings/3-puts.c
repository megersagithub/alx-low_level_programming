#include "main.h"

/**
 * _puts - prints string.
 * @st: string
 */
void _puts(char *st)
{
	int i = 0;

	while (st[i] != '\0')
	{
		_putchar(st[i]);
		i++;
	}
	_putchar('\n');
}
