#include "main.h"

/**
 * _strlen - Returns length of the strings.
 * @st: string
 *
 * Return: Returns int
 */
int _strlen(char *st)
{
	int i = 0;

	while (st[i] != '\0')
	{
		i++;
	}
	return (i);
}
