#include "main.h"
#include <string.h>

/**
 * print_rev - prints string reverse
 * @str : pointer string
 */

void print_rev(char *str)
{
	int i = 0;
	int len = strlen(str) - 1;

	while (len >= i)
	{
		_putchar(str[len]);
		len--;
	}
	_putchar('\n');
}
