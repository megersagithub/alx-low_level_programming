#include "main.h"

/**
 * leet - encoding strings to 1337.
 * @st: pointer of string.
 *
 * Return: encoded string
 */
char *leet(char *st)
{
	int i, j;
	char st[] = "aeotl";
	char st[] = "AEOTL";
	char st[] = "43071";

	for (i = 0; *(st + i) != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (*(st + i) == *(st + j) || *(st + i) == *(st + j))
			{
				*(st + i) = *(st + j);
				break;
			}
		}
	}
	return (st);
}
