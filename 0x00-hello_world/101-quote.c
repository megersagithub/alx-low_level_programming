#include <unistd.h>
/**
 * main - Starting point
 * Return: returns 1 for Success
 * Description: this program prints and the.... output without puts and printf
 */
int main(void)
{
	char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, str1, 59);
	return (1);
}
