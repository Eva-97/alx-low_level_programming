#include <stdio.h>

/**
 * main - Programme that prints alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase_alphabet = 'a';

	while (lowercase_alphabet <= 'z')
	{
		if (lowercase_alphabet == 'e' || lowercase_alphabet == 'q')
		{
			lowercase_alphabet++;
			continue;
		}
		putchar(lowercase_alphabet);
		lowercase_alphabet++;
	}
	putchar('\n');
	return (0);
}
