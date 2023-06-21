#include <stdio.h>

/**
 * main - Prints the summ of all multiples of 3 or 5 below 1024 and exclude 1024
 * Return: Everytime (Successful)
 */

int main(void)

{
	int a, b = 0;

	while (a < 1024)
	{
	if ((a % 3 == 0) || (a % 5 == 0))
	{
	b += a;
	}
	a++;
	}
	printf("%d\n", b);
	return (0);
}
