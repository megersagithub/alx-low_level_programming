#include "main.h"

/**
 * *_strncat - concatenat two strings.
 * @dest: pointer of destination
 * @src: pointer of source
 * @n: number of bytes
 *
 * Return: concatenated strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	for (len = 0; dest[len] != '\0'; len++)
	;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];

	/*should end with a end of string null char*/
	dest[len + i] = '\0';

	return (dest);
}
