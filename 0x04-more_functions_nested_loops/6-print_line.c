#include "main.h"
#include <stdio.h>

/**
 * print_line - prints a line
 * @n: number of line
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		else
		{
			break;
		}
		i++;
	}
	_putchar('\n');
}
