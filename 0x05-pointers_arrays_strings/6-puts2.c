#include "main.h"
#include <stdio.h>

/**
 * _strlen - length of a string
 * @s: string
 * Return: length of the string s
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * puts2 - print every other character of a string
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0' && i < _strlen(str))
	{
		putchar(str[i]);
		i += 2;
	}

	putchar('\n');
}
