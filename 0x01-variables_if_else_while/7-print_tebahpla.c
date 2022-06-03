#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main- generates letters in reverse
 * Return: return letters
 * Description: this code print alphabet in reverse
 */
int main(void)
{
	char alphab;

	for (alphab = 'z'; alphab >= 'a'; alphab--)
	{
		putchar (alphab);
	}
	putchar ('\n');
	return (0);
}
