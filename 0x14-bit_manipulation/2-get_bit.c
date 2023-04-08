#include <stdio.h>
#include "main.h"

/**
 * get_bit - value of a certain bit
 * @n: decimal
 * @index: index
 * Return: value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int curr;

	curr = (n >> index);

	if (index > 32)
	{
		return (-1);
	}
	return (curr & 1);

}
