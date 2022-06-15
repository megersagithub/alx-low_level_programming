#include "main.h"

/**
 * *cap_string - capitalize all words of strings.
 * @str: pointer of string
 *
 * Return: capitalized strings
 */
char *cap_string(char *str)
{
	char s[] = ",\t;\n; .!?\"(){}";
	int flg, i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		flg = 0;

		if (i == 0)
		{
			flg = 1;
		}
		else
		{
			for (j = 0; s[j] != '\0'; j++)
			{
				if (str[i - 1] == s[j])
				{
					flg = 1;
					break;
				}
			}
		}
		if (flg == 1)
		{
			if (str[i] <= 'z' && str[i] >= 'a')
			{
				str[i] -= ('a' - 'A');
			}
		}
	}
	return (str);
}
