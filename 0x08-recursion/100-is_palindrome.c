#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: String
 * Return: The length of a string
 */

int _strlen_recursion(char *s)

{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * camparator - Compares each character of the string
 * @s: String
 * @n1: Smallest iterator
 * @n2: Biggest iterator
 * Return: .
 */

int camparator(char *s, int n1, int n2)

{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 >= n2 || n1 == n2 + 1)
			return (1);
		return (0 + camparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a string is a palindrome
 * @s: string
 * Return: 1 if s is a palindrome, 0 if not.
 */

int is_palindrome(char *s)

{
	if (*s == '\0')
		return (1);
	return (camparator(s, 0, _strlen_recursion(s) - 1));
}
