#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int i = 0;
	int j, k;

	for (k = 0; k < 10; k++)
	{
		for (j = 0; j <= 14; j++)
		{
			if ((i / 10) > 0)
			{
				_putchar('0' + (i / 10));
			}
			_putchar('0' + (i % 10));
			i++;
		}
		i = 0;
		_putchar('\n');
	}

}
