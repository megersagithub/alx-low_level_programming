#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main- print small letters
 * Return: return letters
 * Description: this program returns lower case letters
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar (alph);
	}
	putchar ('\n');
	return (0);
}
