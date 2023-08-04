#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function that checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void);
{
	unsigned long int n = 1;
	return (*(char *)&n);
}
