#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print 0 to 9 exept 2 & 4
 * Return: void
 */

void print_most_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		if (i == '2' || i == '4')
		{
		}
		else
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');

}
