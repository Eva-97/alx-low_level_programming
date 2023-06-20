#include <stdio.h>

/**
 * main - Program that prints all combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first_num, second_num;

	first_num = 0;
	while (first_num < 100)
	{
		second_num = 0;
		while (second_num < 100)
		{
			if (first_num < second_num)
			{
				putchar((first_num / 10) + 48);
				putchar((first_num % 10) + 48);
				putchar(' ');
				putchar((second_num / 10) + 48);
				putchar((second_num % 10) + 48);
				if (first_num != 98 || second_num != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			second_num++;
		}
		first_num++;
	}
	putchar('\n');
	return (0);
}
