#include "main.h"

/**
 * _strncat - Concatenates two strings using at most
 *
 * an inputed number of bytes from scr
 * @dest: String to be appended upon
 * @src: String to be appended to dest
 * @n: Number of bytes from src to the appended to dest
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)

{

	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
	return (dest);

}
