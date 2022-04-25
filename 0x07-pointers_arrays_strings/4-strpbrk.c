#include "main.h"
#define NULL 0

/**
 * _strpbrk - the first mach of any bytes of accept
 * @s: string
 * @accept: prefix
 * Return: mach of any bytes of accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int co = 0;

	while (s[i] != '\0' && co != 1)
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j] && accept[j] != ' ')
			{
				co = 1;
				break;
			}
			j++;
		}
		i++;
	}
	if (co == 1)
		return (&s[i]);

	else
		return (NULL);
}
