#include "main.h"
#include <stdio.h>
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: pointer to number to change
 * @index: starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;
	unsigned int kk;

	if (index > 64)
		return (-1);
	kk = index;
	for (j = 1; kk > 0; j *= 2, kk--)
		;

	if ((*n >> index) & 1)
		*n -= j;

	return (1);
}
