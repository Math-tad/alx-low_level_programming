#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - print space diagonaly
 * @n: number of space
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 1;
	int j;

	if (n > 0)
	{
		while (i <= n)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}

}
