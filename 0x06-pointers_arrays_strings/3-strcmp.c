#include "main.h"

/**
 * _strcmp - compares two strings.
 * @st1: string 1
 * @st2: string 2
 *
 * Return: 0 if matching, nstr1 - nstr2 if not matching.
 */
int _strcmp(char *st1, char *st2)
{
	int i;

	for (i = 0; st1[i] != '\0' || st2[i] != '\0'; i++)
	{
		if (st1[i] != st2[i])
		{
			return (st1[i] - st2[i]);
		}
	}
	return (0);
}
