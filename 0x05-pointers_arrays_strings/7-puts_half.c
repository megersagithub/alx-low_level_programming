#include "main.h"

/**
 * puts_half - print 2nd half of a string.
 * @str: string pointer.
 * Return: no return.
 * Description: If odd num of char it prints half.
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
