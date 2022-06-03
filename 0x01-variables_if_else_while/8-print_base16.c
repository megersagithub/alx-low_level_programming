#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main- print al numbers of base 16 in lower case
 * Return: return numbers
 * Description:  prints all the numbers of base 16 in lowercase
 */
int main(void)
{
	char b;
	int j;

	for (j = '0'; j <= '9'; j++)
	{
		putchar (j);
	}
	for (b = 'a'; b <= 'f'; b++)
	{
		putchar (a);
	}
	putchar ('\n');
	return (0);
}
