#include "main.h"

/**
 * is_prime_number - check whether a number is prime or not.
 * @n: number
 *
 * Return 0 or 1.
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check all num < n if they can divide it.
 * @n: number
 * @resp: int.
 *
 * Return: int.
 */

int check_prime(int n, int resp)
{
	if (resp >= n && n > 1)
		return (1);
	else if (n % resp == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, resp + 1));
}
