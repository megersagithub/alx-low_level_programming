#include "main.h"
/**
 * print_sign - check number is -ve or +ve.
 * @n : the number to check.
 *
 * Return: return 0 or 1.
 */
int print_sign(int n)
{
	int val;

	if (n > 0)
	{
		val = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		val = 0;
		_putchar('0');
	}
	else
	{
		val = -1;
		_putchar('-');
	}
	return (val);
}
