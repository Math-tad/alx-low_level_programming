#include <stdio.h>

/**
 * main - starting of the code
 * Return: always 0
 */

int main(void)
{
	int single_digit_nums = 0;

	while (single_digit_nums <= 9)
	{
		printf("%d", single_digit_nums);
		single_digit_nums++;
	}
	printf("\n");

	return (0);
}
