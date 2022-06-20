#include "main.h"

/**
 * *_strchr - locates character in string.
 * @s: pointer to constant.
 * @c: constant.
 *
 * Return: string.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'  ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
