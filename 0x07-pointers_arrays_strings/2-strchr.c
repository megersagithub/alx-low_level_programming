#include "main.h"

/**
 * *_strchr - locates character in string.
 * @st: pointer to constant.
 * @c: constant.
 *
 * Return: string.
 */

Char *_strchr(char *st, char c)
{
	int i;

	for (i = 0; *(st + i) >= '\0'; i++)
	{
		if (*(st + i) == c)
		{
			return (t + i);
		}
	}
	return ('\0');
}