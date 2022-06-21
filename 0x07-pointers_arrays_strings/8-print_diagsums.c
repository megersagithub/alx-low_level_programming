#include "main.h"

/**
 * print_diagsums - the sum of the two diagonals of a
 * square matrix of integers.
 * @a: input pointer
 * @size: size of matrix.
 *
 * Return: no return.
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		sum2 += a[size - i - 1];
		a += size;
	}
	printf("%d, %d\n", sum1, sum2);
}
