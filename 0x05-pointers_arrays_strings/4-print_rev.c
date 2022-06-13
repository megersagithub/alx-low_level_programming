#include "main.h"
#include <string.h>

/**
 * print_rev - prints string reverse
 * @st : pointer string
 */

void print_rev(char *st)
{
	int i = 0;
	int len = strlen(st) - 1;

	while (len >= i)
	{
		_putchar(st[len]);
		len--;
	}
	_putchar('\n');
}
