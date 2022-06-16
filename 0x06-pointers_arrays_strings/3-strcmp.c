#include "main.h"

/**
 * _strcimp - compares two strings.
 * @str1: string 1
 * @str2: string 2
 *
 * Return: 0 if matching, nstr1 - nstr2 if not matching.
 */
int _strcmp(char *str1, char *str2)
{
	int i;

	for (i = 0; *(str1 + 1) != '\0' || *(str2 + i) != '\0'; i++)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
	}
	return (0);
}
