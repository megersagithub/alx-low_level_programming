#include "main.h"

/**
 * reverse_array - reverse content of array.
 * @m: pointer
 * @n: length of array
 *
 * Return: no return
 */

void reverse_array(int *m, int n)
{
	int i = 0, half;

	for (half = n / 2; half > 0; half--, i++)
	{
		m[n - i - 1] += m[i];
		m[i] = m[n - i - 1] - m[i];
		m[n - i - 1] = m[n - i - 1] - m[i];
	}
}
