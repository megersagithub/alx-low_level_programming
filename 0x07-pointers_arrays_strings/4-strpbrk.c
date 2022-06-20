#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @st: pointer to string.
 * @accept: string to match.
 *
 * Return: pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *st, char *accept)
{
	int i, j;
	char *pt;

	i = 0;
	while (st[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == st[i])
			{
				pt = &st[i];
				return (pt);
			}
			j++;
		}
		i++;
	}

	return (0);
}
