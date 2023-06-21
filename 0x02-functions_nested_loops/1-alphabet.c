#include "stdio.h"
/**
*print_alphabet - Function that print alphabet in lowercase
*
*Return: no return
*/
void print_alphabet(void)
{
int letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar (letter);
}
_putchar (10);
}
