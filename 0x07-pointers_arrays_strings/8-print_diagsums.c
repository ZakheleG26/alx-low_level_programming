#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Enter
 * @a: Input
 * @size: Input
 * Return: Everytime 0 (Successful)
 */

void print_diagsums(int *a, int size)

{
	int i, n, sum1 = 0, sum2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		sum1 = sum1 + a[i];

	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
		sum2 = sum2 + a[n];
	printf("%d, %d\n", sum1, sum2);

}
