#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function that prints the binary representation of a number
 * @b: binary numb to print
 * Return: void
 */
void print_binary(unsigned long int n);
{
	int B = sizeof(n) * 8, printed = 0;

	while(B)
	{
		if (n & 1L << --B)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
			_putchar('0');
	}

	if (!printed)
		_putchar('0');
}
