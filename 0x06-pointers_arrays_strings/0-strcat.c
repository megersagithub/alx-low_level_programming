#include "main.h"

/**
 * *_strcat - concatenate two strings.
 * @dest: pointer of destination.
 * @src: pointer of source
 *
 * Return: to destination
 */
char *_strcat(char *dest, char *src)
{
	int a = -1, b;

	for (b = 0; dest[b] != '\0'; b++)
	;

	do {
		a++;
		dest[b] = src[a];
		b++;
	} while (src[a] != '\0');

	return (dest);
}
