#include "main.h"

/**
 * swap_int - Swaps two values
 * @a: first value
 * @b: second value
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
