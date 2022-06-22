#include "main.h"

/**
 * _strlen_recursion - check string is palindrome or not.
 * @s: string
 *
 * Return: 0 or 1.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - compares each character of the string.
 * @s: string.
 * @i: smallest iterator.
 * @j: biggest iterator.
 * Return: no return.
 */

int comparator(char *s, int i, int j)
{
	if (s(s + i) == *(s + j))
	{
		if (i == j || i == j + 1)
			return (1);
		return (0 + comparator(s, i + 1, j - 1));
	}
	return (0);
}

/**
 * is_palindrome - check palindrome.
 * @s: string.
 * Return: 1 if palidrome, 0 if not.
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
