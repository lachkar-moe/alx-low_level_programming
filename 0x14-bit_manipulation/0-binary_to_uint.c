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
	unsigned int number;
	const char *clone = b;

	while (*clone != '\0')
	{
		if (*clone == '0' || *clone == '1')
		{
			number = number << 1;
			if (*clone == '1')
			{
				number = number | 1;
			}
		} else
		{
			return (0);
		}
		clone++;
	}

	return (number);
}
