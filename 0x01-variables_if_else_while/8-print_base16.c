#include <stdio.h>

/**
 * main - Programme that prints all the numbers in base sixteen
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int hexadecimal_number = 48;
	char hexadecimal_alphabet = 'a';

	while (hexadecimal_number <= 57)
	{
		putchar(hexadecimal_number);
		hexadecimal_number++;
	}
	while (hexadecimal_alphabet <= 'f')
	{
		putchar(hexadecimal_alphabet);
		hexadecimal_alphabet++;
	}
	putchar('\n');
	return (0);
}
