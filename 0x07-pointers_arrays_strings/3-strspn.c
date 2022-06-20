#include "main.h"

/**
 * *_strspn - length os prefix substring.
 * @st: pointer of string.
 * @accept: character for matching.
 *
 * Return: length in int.
 */

unsigned int _strspn(char *st, char *accept)
{
	int i, j, cm = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] > '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				cm++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (cmpt);
}
