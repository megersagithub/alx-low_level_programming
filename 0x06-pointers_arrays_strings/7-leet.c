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
	char st1[] = "aeotl";
	char st2[] = "AEOTL";
	char st3[] = "43071";

	for (i = 0; *(st + i) != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (*(st + i) == *(st1 + j) || *(st + i) == *(st2 + j))
			{
				*(st + i) = *(st3 + j);
				break;
			}
		}
	}
	return (st);
}
