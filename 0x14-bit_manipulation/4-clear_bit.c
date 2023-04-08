#include <stdio.h>
#include "main.h"

/**
 * clear_bit - set the value of a certain bit to 0
 * @n: decimal number by pointer
 * @index: index
 * Return: 1 for success, -1 for error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int curr = index;

	if (index > 64)
		return (-1);

	for (i = 1; curr > 0; i *= 2, curr--)

	/*empty for loop*/
		;

	if ((*n >> index) & 1)
		*n = *n - i;

	return (1);
}
