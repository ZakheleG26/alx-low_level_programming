#include <stdio.h>
/**
 * main - Enter
 * Return: 0 (Successful)
 */

int main(void)
{
	int ones = '0';
	int tens = '0';

	for (ones = '0'; tens <= '9'; tens++)
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			if (!((ones == tens) || (tens > ones)))
			{
				putchar(tens);
				putchar(ones);
				if (!((ones == '9' && tens == '8')))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
