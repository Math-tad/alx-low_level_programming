#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generates a valid password
 * Return : always 0
 */

int main(void)
{
	int num;

	srand(time(0));
	num = rand();
	printf("%i\n", num);

	return (0);
}
