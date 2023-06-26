#include "main.h"

/**
 * rev_string - Reverse string
 * @s: The string that will be modified
 * Return: Void
 */

void rev_string(char *s)

{
	int len = 0, index = 0;
	char temp;

	while (s[index++])
	len++;

	for (index = len - 1; index >= len / 2; index--)
	{
	tmp = s[index];
	s[index] = s[len - index - 1];
	s[len - index - 1] = tmp;
	}
}