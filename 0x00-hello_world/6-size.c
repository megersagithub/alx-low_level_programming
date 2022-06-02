#include <studio.h>
/**
 * main: the starting point
 * Return: returns 0 for 0s
 * Description: A program prints a atring a size of variable types
 **/
int main(void)
{
	printf("Size of char : %d byte(s)\n", sizeof(char));
	printf("Size of int : %d byte(s)\n", sizeof(int));
	printf("Size of long int : %d byte(s)\n", sizeof(long int));
	printf("Size of long long int : %d byte(s)\n", sizeof(long long int));
	printf("Size of float : %d byte(S)\n", sizeof(float));
}
