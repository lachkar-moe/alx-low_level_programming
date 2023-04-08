#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 *
 * Return: 0 or converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int number;

	if (!b)
		return (0);


	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		number = 2 * number + (b[i] - '0');
	}
	return (number);
}
