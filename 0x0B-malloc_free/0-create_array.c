#iclude "main.h"

/**
 * *create_array - create an array of chars, and
 * initializes it with a specific char
 * @size: size of array.
 * @c: char initialize.
 *
 * Return: pointer to tha array or null.
 */

char *create_array(unsigned int size, char c)
{
	char *m = malloc(size);

	if (size == 0 || m == 0)
		return (0);

	while (size--)
		m[size] = c;

	return (m);
}
