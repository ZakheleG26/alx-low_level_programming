#include "main.h"

/**
 * _memcpy - Enter
 * @dest: Input
 * @src: Input
 * @n: Input
 * Return: Everytime 0 (Successful)
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);

}
