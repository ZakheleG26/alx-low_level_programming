#include "main.h"
#include <stdio.h>

/**
 * create_array - creates an array of the chars
 * @size: The size of the array
 * @c: The chat to fill in the array
 * Return: The array that is filled
 */

char *create_array(unsigned int size, char c)

{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
