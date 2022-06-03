#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main- Prints all letter except q and e
 * Return: return letters
 * Description: this code prints all letters except q and e
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'q' && alphabet != 'e')
			putchar (alphabet);
	}
	putchar ('\n');
	return (0);
}
