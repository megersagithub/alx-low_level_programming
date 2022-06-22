#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number.
 *
 * Return: integer num.
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - finds square root.
 * @n: integer to find square root.
 * @val: square root.
 * Return: integer num
 */

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
