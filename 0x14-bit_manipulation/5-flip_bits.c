#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to convert number to another number
 * @n: first number
 * @m: second number
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d;
	int c;

	diff = n ^ m;
	c = 0;

	while (d)
	{
		c++;
		d &= (d - 1);
	}

	return (c);
}
