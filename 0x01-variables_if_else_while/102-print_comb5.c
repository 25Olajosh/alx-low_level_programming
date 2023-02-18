#include <stdio.h>

/**
 * main- Entry point
 * @void: Null value
 *
 * Description: Print numbers from 00 to 99
 * Return: Zero value
 */

int main(void)
{
	int i = 0;
	int j;
	int count = 0;

	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (count != 4949)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
			count++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
