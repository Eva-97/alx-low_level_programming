#include <stdio.h>

/**
 * main - Programme that prints the lowercase alphabets in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase_alphabet_reversed = 'z';

	while (lowercase_alphabet_reversed >= 'a')
	{
		putchar(lowercase_alphabet_reversed);
		lowercase_alphabet_reversed--;
	}
	putchar('\n');
	return (0);
}
