#include "main.h"

/**
 * strint_toupper - Changes all lowercase letters
 * of a string to uppercase
 * @str: String that will be changed
 * Return: A pointer to the changed string
 */

char *string_toupper(char *)

{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		str[index] -= 32;
		index++;
	}
	return (str);

}
