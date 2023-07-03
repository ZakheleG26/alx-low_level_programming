#include <stdio.h>
#include "main.h"

/**
 * _strstr - Enter
 * @haystack: Input
 * @needle: Input
 * Return: Everytime 0 (Successful)
 */

char *_strstr(char *haystack, char *needle)

{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (haystack);
	}

	return (NULL);

}
