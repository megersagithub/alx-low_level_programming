#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main- prints capital and small letters
 * Return: return capital and small
 * Description: thisc code prints small and acpital letters
 */
int main(void)
{
	char alph, alphab;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar (alph);
	}
	for (alphab = 'A'; alphab <= 'Z'; alphab++)
	{
		putchar (alphab);
	}
	putchar ('\n');
	return (0);
}
