#include <stdio.h>

/**
 * main - starting of the code
 * Return: always 0
 */

int main(void)
{
	int singleDig_nums = '0';
	int singleDig_nums2 = '1';
	int singleDig_nums3 = '2';

	while (singleDig_nums <= '9')
	{
		while (singleDig_nums2 <= '9')
		{
			while (singleDig_nums3 <= '9')
			{
				putchar(singleDig_nums);
				putchar(singleDig_nums2);
				putchar(singleDig_nums3);

				if (singleDig_nums == '7' && singleDig_nums2 == '8' &&
						singleDig_nums3 == '9')
				{
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
				singleDig_nums3++;
			}
			singleDig_nums2++;
			singleDig_nums3 = singleDig_nums2 + 1;
		}
		singleDig_nums++;
		singleDig_nums2 = singleDig_nums + 1;
		singleDig_nums3 = singleDig_nums + 2;
	}
	putchar('\n');

	return (0);
}
