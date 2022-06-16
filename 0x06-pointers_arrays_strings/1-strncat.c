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
	int a, b;

	for (a = 0; *(dest + a) != '\0'; a++)
	;

	for (b = 0; b < n && *(src + b) != '\0'; b++)
		dest[a + b] = *(src + b);

	dest[a + b] = '\0';

	return (dest);
}
