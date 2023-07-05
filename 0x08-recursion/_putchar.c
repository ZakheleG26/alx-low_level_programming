#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: Successful 1.
 * Error if -1 is returned, errno set properly
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}
