#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @c: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *c)
{
	unsigned int total, power;
	int len;

	if (c == NULL)
		return (0);

	for (len = 0; c[len]; len++)
	{
		if (c[len] != '0' && c[len] != '1')
			return (0);
	}

	for (power = 1, total = 0, len--; len >= 0; len--, power *= 2)
	{
		if (c[len] == '1')
			total += power;
	}

	return (total);
}
