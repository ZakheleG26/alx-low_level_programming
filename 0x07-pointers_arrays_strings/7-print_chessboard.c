#include "main.h"

/**
 * print_chessboard - Enter
 * @a: Array
 * Return: Everytime 0 (Successful)
 */

void print_chessboard(char (*a)[8])

{
	int i, n;

	for (i = 0; i < 8; i++)
	{
		for (n = 0; n < 8; n++)
			_putchar(a[i][n]);
		_putchar('\n');
	}
}
