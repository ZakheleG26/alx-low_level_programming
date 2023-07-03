#include <stdio.h>
#include "main.h"

/**
 * _strchr - Enter
 * @s: Input
 * @c: Input
 * Return: Everytime 0 (Successful)
 */

char *_strchr(char *s, char c)

{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);

}
