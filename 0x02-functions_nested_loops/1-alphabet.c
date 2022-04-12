#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints lowercase alphabets
 * Return: always 0
 */

void print_alphabet(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		_putchar(lowercase);
		lowercase++;

	}

	_putchar('\n');
}
