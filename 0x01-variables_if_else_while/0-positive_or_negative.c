#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main- generate random numbers
 * Return: return +ve or 0 or -ve
 * Description: this program prints +ve number or 0 or -ve number
 */
int main(void)
{
	int n;

	scrand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is positive\n", n);
	return (0);
}
