#include "main.h"
#include <stdio.h>
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to evaluate
 * @index: index starting from 0, of the bit we want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int h;

	if (index > 64)
		return (-1);

	h = n >> index;

	return (h & 1);
}
