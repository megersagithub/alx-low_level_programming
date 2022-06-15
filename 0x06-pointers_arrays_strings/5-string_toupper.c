#include "main.h"

/**
 * *string_toupper - change to upper case letter
 * @str: pointer of string
 *
 * Return: return string in upper case
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) <= 'z' && *(str + i) >= 'a')
			*(str + i) -= 32;
	}
	return (str);
}
