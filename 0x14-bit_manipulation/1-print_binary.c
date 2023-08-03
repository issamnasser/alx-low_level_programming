#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function that prints the binary representation of a number
 * @b: binary numb to print
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int bit;
	int shifts;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (bit = n, shifts = 0; (bit >>= 1) > 0; shifts++)
		;

	for (; shifts >= 0; shifts--)
	{
		if ((n >> shifts) & 1)
			printf("1");
		else
			printf("0");
	}
}
