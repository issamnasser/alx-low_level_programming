#include "main.h"
#include <stdio.h>

/**
 *  a function that converts a binary number to an unsigned int
 * @b: char string
 * Return: Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int t=0;
	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
    t = t*2 + (*b++ - '0');
	}
  return (t);
