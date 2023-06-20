#include "main.h"

/**
 * _islower - Check lowercase character
 * @c: The character to be checked
 * Return: 1 if the character is a lowercase letter, 0 otherwise
 */

int _islower(int c)

{

	if (c >= 97 && c <= 122)
	{

	return (1);
	}
	return (0);
}
