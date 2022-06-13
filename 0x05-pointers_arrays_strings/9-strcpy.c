#include "main.h"

/**
 * *_strcpy - copies string pointed by src to pointed by dest.
 * @src: src string
 * @dest: destination string
 *
 * Return: returns string pointed by dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i >= 0)
	{
		*(dest + i) = *(src + i);
		if (*(src + i) == '\0')
			break;
		i++;
	}
	return (dest);
}
