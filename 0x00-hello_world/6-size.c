#include<stdio.h>

/**
 * main- the starting point
 * Return: it returns 0 for os
 * Description: the program prints a string the size of variable types
 **/

int main(void)
{
		printf("Size of a char: %zu byte(s)\n", sizeof(char));
		printf("Size of an int: %zu byte(s)\n", sizeof(int));
		printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
		printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
		printf("Size of a float: %zu byte(s)\n", sizeof(float));
		return (0);
}
