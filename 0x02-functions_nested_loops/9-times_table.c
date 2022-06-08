#include "main.h"
/**
 * times_table - displays time table
 *
 * Return: returns void
 */
void times_table(void)
{
	int i = 0;
	int j;
	int k;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			k = i * j;
			if (j == 0)
			{
				_putchar('0' + k);
			}
			else if (k < 10)
			{
				_putchar(' ');
				_putchar('0' + k);
			}
			else
			{
				_putchar('0' + k / 10);
				_putchar('0' + k % 10);
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		a++;
	}
}
