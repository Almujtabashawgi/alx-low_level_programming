#include "main.h"

/**
 * binary_to_unit - binary to int
 *@b: binary number
 *Return: the int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int nuberm = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		number = number * 2 + (*b++ - '0');
	}
	return (number);
}
