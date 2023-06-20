#include <stdio.h>

/**
 * main - Programme that prints combinations of  single digit-numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int number = 48;

	while (number <= 57)
	{
		putchar(number);
		if (number != 57)
		{
			putchar(',');
			putchar(' ');
		}
		number++;
	}
	putchar('\n');
	return (0);
}
