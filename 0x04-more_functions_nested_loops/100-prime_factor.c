#include <stdio.h>

/**
 * main - distiguish prime numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned int long num = 612852475143, i = (int) sqrt(num);
	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			num /= i;
			i--;
		}
	}
	printf("%ld\n", i);
	return (0);
}
