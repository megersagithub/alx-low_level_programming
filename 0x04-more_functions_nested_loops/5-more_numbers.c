#include "main.h"

/**
 * more_numbers - prints more numbers.
 *
 * Return: no return
 */

void more_numbers(void)
{
	char num, a;
	int i = 0;


	while (i < 10)
	{
		for (num = 0; num <= 14; num++)
		{
			a = num;
			if (num > 9)
			{
				_putchar('1');
				a = num % 10;
			}
			_putchar('0' + a);
		}
		_putchar('\n');
		i++;
												}
}
