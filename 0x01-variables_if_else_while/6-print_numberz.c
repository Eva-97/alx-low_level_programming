#include <stdio.h>

/**
 * main - Programme prints all single numbers of base ten
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int base_ten_numbers = 48;

	while (base_ten_numbers < 58)
	{
		putchar(base_ten_numbers);
		base_ten_numbers++;
	}
	putchar('\n');
	return (0);
}
