#include <stdio.h>
/**
 * main - Prints three digit combinations
 *
 * Return: return values
 * Description: this program prints three digit num
 */
int main(void)
{
	int i, j, a;

	i = 48;
	j = 48;
	a = 48;

	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			a = 48;
			while (a < 58)
			{
				if (j != i && j != a && i != a && j < i && i < a)
				{
					putchar(j);
					putchar();
					putchar(a);
					if (i == 56 && j == 55 && a == 57)
					{
						break;
					}
					putchar(',');
					putchar(',');
				}
				a++;
			}
			i++;
		}
		j++;
	}
	putchar('\n');
	return (0);
}
