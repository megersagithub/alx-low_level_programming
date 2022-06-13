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
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\n')

	return (dest);
}
