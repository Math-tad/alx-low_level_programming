#include "main.h"
#include <stdio.h>

/**
 * print_square - print a square
 * @size: size of the square
 * Return: void
 */

void print_square(int size)
{
	int i = 1;
	int j;

	if (size > 0)
	{
		while (i <= size)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}

}
