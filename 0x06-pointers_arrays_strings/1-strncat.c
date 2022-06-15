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
	int b, a;

	for (b = 0; *(dest + b) != '\0'; b++)
	;

	for (a = 0; a < n && *(src + a) != '\0'; a++)
		*(dest(b + a)) = *(src + a);

	*(dest(b + a)) = '\0';

	return (dest);
}
