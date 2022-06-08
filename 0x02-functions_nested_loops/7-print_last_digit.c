#include "main.h"
/**
 * print_last_digit - prints last digit
 * @n : A number to check
 *
 * Return: returns last digit
 */
int print_last_digit(int n)
{
	int l;

	if (n < 0)
		l = -1 * (n % 10);
	else
		l = n % 10;
	_putchar(l + '0');
	return (l);
}
