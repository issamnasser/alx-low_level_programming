#include "main.h"
#include <stdio.h>
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number evaluated
 * @index: starting from 0 of the bit you want to get
 * Return:  the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);

	hold = n >> index;

	return (hold & 1);
}
