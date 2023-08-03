#include "main.h"
#include <stdio.h>

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: 1st numb
 * @m: 2nd number to convert
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int counter;

	diff = n ^ m;
	counter = 0;

	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}

	return (counter);
}
