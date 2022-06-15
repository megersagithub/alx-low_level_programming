#include "main.h"

/**
 * *_strncpy - copying string.
 * @dest: pointer of destination.
 * @src: pointer of source
 * @n: int
 *
 * Return: destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);

	for ( ; i < n; i++)
		*(dest + i) = '\0';

	return (dest);
}
