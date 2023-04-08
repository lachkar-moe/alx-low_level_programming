#include "main.h"
#include <stdlib.h>

/**
 * set_bit - sets value of a certain bit
 * @n: decimal number by pointer
 * @index: start frm  0
 * Return: 1 for success, -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 64)
		return (-1);


	for (i = 1; index > 0; index--, i *= 2)
		;

	*n = *n + i;

	return (1);
}
