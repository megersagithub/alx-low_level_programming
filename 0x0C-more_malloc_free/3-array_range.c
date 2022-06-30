#include <main.h>
#include <stdlib.h>

/**
 * *array_range - creates an array integers.
 * @min: min value
 * @max: max value
 *
 * Return: pointer to newly created array.
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		arr[i] = min;

	return (arr);
}
