#include <stdio.h>

/**
 * swap_int - Will swap the values of two integers
 * @a: The first integer to swap
 * @b: The second integer to swap
 * Return: Ziltch
 */

void swap_int(int *a, int *b)
/* the function that swaps the values of two integers. */

{
	int temp = *a;
	*a = *b;
	*b = temp;
}
