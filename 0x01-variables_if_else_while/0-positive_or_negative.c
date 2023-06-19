#include <stdlib.h>
#include <time.h>
#include <stdio>

/**
 * main - Entry point
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = ramd() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}