#include <stdio.h>

/**
 * main - starting of the code
 * Return: always 0
 */

int main(void)
{
	int single_digit_nums = '0';

	while (single_digit_nums <= '9')
	{
		putchar(single_digit_nums);
		if (single_digit_nums != '9')
		{
			putchar(',');
			putchar(' ');
		}
		single_digit_nums++;
	}
	putchar('\n');

	return (0);
}
