#include "stdio.h"

/**
*main - Program that print putchar with a new line
*
*Return:return 0
*/
int main(void)
{
	char school[10] = "putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		putchar(school[i]);
	}
	putchar(10);
	return (0);
}
