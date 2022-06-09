#include <stdio.h>
#include <math.h>

/**
 * main - distiguish prime numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned int long num = 612852475143, i = (int) sqrt(num);
	while (1)
	{
		if (num % i == 0)
		{
			printf("%lu \n", num / i);
			break;
		}
		i--;
	}
	return (0);
}
