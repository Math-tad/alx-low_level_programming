#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabets 10x
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		char lowercase = 'a';

		while (lowercase <= 'z')
		{
			_putchar(lowercase);
			lowercase++;
		}

		_putchar('\n');

	}





}
