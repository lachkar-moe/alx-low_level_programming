#include <stdio.h>
#include "main.h"

/**
 * flip_bits - flip bits to convert a number to another
 * @n: first number
 * @m: number to convert to
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int tempo = n ^ m;
	unsigned int i = 0;
;
	while (tempo != 0)
	{
		i += tempo & 1;
		tempo >>= 1;
	}

	return (i);
}
