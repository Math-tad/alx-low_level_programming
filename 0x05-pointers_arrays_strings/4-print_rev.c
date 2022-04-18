#include "main.h"
#include <stdio.h>

/**
 * print_rev - print a string reverse
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	s--;

	while (len > 0)
	{
		putchar(*s);
		len--;
		s--;
	}
	putchar('\n');
}
