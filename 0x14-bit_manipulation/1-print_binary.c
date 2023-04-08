#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary version of a number
 * @n: parameter
 */

void print_binary(unsigned long int n)
{
	int curr = 0;

	while (n > (1UL << (curr + 1)))
	{
		curr++;
	}

	while (curr >= 0)
	{
		char c = ((n >> curr) & 1UL) + '0';
		_putchar(c);
		curr--;
	}
}
