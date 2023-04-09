#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big, 1 if little .
 */

int get_endianness(void)
{
	unsigned int number = 1;
	char *ptr = (char *)&number;

	if (*ptr == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
