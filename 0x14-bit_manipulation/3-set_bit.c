#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: decimal number passed by pointer
 * @index: index position to change, starting from 0
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int r;

	if (index > 64)
		return (-1);

	for (r = 1; index > 0; index--, r *= 2)
		;
	*n += r;

	return (1);
}
