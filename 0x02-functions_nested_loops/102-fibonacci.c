#include <stdio.h>

/**
 * main - Prints the first 52 fibonacci numbers
 * Return: Ziltch
 */

int main(void)

{

	int b = 0;
	long c = 1, d = 2;

	while (b < 50)
	{
	if (b == 0)
	printf("%ld", c);
	else if (b == 1)
	printf(", %ld", d);
	else
	{
	d += c;
	b = c - d;
	printf(", %ld", d);
	}
	++b;
	}
	printf("\n");
	return (0);

}
