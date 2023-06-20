#include <stdio.h>

/**
 * main - Alphabet game
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char lowercase_alphabet = 'a';

	while (lowercase_alphabet <= 'z')
	{
		putchar(lowercase_alphabet);
		lowercase_alphabet++;
	}
	putchar('\n');
	return (0);
}
