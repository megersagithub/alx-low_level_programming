#include "main.h"

/**
 * *_memset - fills memory with constant byte
 * @s: pointer to put the constant.
 * @n: constant: max bytes to use.
 * @b: constant.
 *
 * Return: constant bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++; n--)
	{
		s[i] = b;
	}
	return (s);
}
