#include "main.h"
/**
 * main- it prints output
 * Return: returns a value
 * Description: this program prints _putchar
 */
int main(void)
{
	int i = 0;
	char ch[8] = "_putchar";

	while (i < 8)
	{
		_putchar(ch[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
