#include "main.h"

/**
 * rot13 - encodes string using rot13.
 * @str: string
 *
 * Return: encoded
 */
char *rot13(char *str)
{
	int c = 0, i;
	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*(str + c) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(str + c) == alph[i])
			{
				*(str + c) == rot13[i];
				break;
			}
		}
		c++;
	}
	return (str);
}
