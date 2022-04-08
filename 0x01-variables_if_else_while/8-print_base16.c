#include <stdio.h>

/**
 * main - starting of the code
 * Return: always 0
 */

int main(void)
{
	int base16_n = '0';
	int base16_10_to_15 = 'a';

	while (base16_n <= '9')
	{
		putchar(base16_n);
		base16_n++;
	}
	while (base16_10_to_15 <= 'f')
	{
		putchar(base16_10_to_15);
		base16_10_to_15++;
	}
	putchar('\n');

	return (0);
}
