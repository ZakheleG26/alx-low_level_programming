#include "main.h"

/**
 * _memset - Enter
 * @s: Pointer destination
 * @b: Constant byte
 * @n: Bytes
 * Return: Everytime 0 (Successful)
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);

}
