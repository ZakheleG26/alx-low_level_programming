#include "main.h"

/**
 * _strcmp - Functions that compares two strings
 * @s1: Pointer to the first string to be compared
 * @s2: Pointer to the second string to be compared
 * Return: If str1 < str2, the negative difference of
 * the first unmatched characters
 * If str1 == str2, 0
 * If str1 > str2 the positive of the difference of
 * the first unmatched charactres
 */

int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);

}
