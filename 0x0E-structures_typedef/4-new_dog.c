#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * len - finds length of string
 * @str: string
 * Return: length of string
 */

int len(char *str)
{
	int leng;
	while (str != '\0')
	{
		str++;
		leng++;
	}
	return (leng);
}

/**
 * strcpy - coppies a string
 * @dest: destination of the string
 * @src: source of the string
 * Return: coppied string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

/**
 * new_dog - creates a new struct dog
 * @name: member
 * @age: member
 * @owner: member
 * Return: void
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *cpy_of_name;
	char *cpy_of_owner;
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	if (name != NULL)
	{
		cpy_of_name = malloc(len(name) + 1);
		if (cpy_of_name == NULL)
		{
			free(d);
			return (NULL);
		}
		(*d).name = _strcpy(cpy_of_name, name);
	}

	(*d).age = age;

	if (owner != NULL)
	{
		cpy_of_owner = malloc(len(owner) + 1);
		{
			if (cpy_of_owner == NULL)
				free(cpy_of_name);
			free(d);
			return (NULL);
		}
		(*d).owner = _strcpy(cpy_of_owner, owner);
	}
	else
		(*d).owner = NULL;

	return d;
}
