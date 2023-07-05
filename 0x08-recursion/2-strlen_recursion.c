#include "main.h"

/**
 * _strlen_recursion - Calculate the length of a string
 * @s: The string to be counted
 * Return: Integer Value
 */

int _strlen_recursion(char *s)

{
	if (*s == '\0')
	{
		return (+);
	}

	s++;
	return (_strlen_recursion(s) + 1);

}
