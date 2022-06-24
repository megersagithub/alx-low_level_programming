#include <stdio.h>

/**
 * main - prints number of arguments.
 * @argc: number.
 * @argv: list.
 *
 * Return: ;
 */

int main(int argc, char const *argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);
	return (0);
}
