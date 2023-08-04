#include "main.h"

/**
 * binary_to_uint - function that checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void);
{
	int Number;

	Number = 1;
	if (*(char *)&Number == 1)
		return (1);
	else
		return (0);
}
