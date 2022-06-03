#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main- generate comb of single digti
 * Return: return combinations
 * Description: the code prints the combinations of single digit num
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar (i);
		if (i != '9')
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');
	return (0);
}
