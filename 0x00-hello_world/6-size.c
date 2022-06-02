#include <studio.h>
/**
 * main: the starting point
 * Return: returns 0 for 0s
 * description: A program prints a atring a size of variable types
 * */
int main(void)
{
	printf("Size of char : %zu byte(s)\n", sizeof(char));
	printf("Size of int : %zu byte(s)\n", sizeof(int));
	printf("Size of long int : %zu byte(s)\n", sizeof(long int));
	printf("Size of long long int : %zu byte(s)\n", sizeof(long long int));
	printf("Size of float : %zu byte(S)\n", sizeof(float));
}
