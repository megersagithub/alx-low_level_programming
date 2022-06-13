#include "main.h"

/**
 * puts2 - prints a string.
 * @str: pointer of string
 *
 * Return: no return.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	i++;
	}
	_putchar('\n');
}
