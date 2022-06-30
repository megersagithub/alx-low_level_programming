#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using mallocs.
 * @a: int
 *
 * Return: pointer to array initiated or NULL.
 */

void *malloc_checked(unsigned int a)
{
	int *x = malloc(a);

	if (x == 0)
		exit(98);
	return (x);
}
