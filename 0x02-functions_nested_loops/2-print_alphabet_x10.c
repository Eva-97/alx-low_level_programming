#include "main.h"

/**
*main - Function that prints ten times the alphabet in lowercase
*Return: Always 0
*/

void print_alphabet_x10(void)
{
int counter = 0;
int letter;
while (counter++ <= 9)

{
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);

_putchar(10);
}
}
