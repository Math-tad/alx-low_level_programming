#include <stdio.h>

/**
 * main - starting of the code
 * Return: always 0
 */

int main(void)
{
	char alphabet = 'a';
	char alpha = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	while (alpha <= 'Z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
