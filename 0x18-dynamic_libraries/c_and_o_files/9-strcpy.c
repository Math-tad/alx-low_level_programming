#include "main.h"
#include <stdio.h>

/**
 * _strcpy - coppy a string
 * @dest: storing var
 * @src: string to be coppied
 * Return: coppied string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i <= _strlen(src))
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
