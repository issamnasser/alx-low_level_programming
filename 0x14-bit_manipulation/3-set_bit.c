#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: number passed by pointer
 * @index: starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int t;

	if (index > 64)
		return (-1);

	for (t = 1; index > 0; index--, t *= 2)
		;
	*n += t;

	return (1);
}
