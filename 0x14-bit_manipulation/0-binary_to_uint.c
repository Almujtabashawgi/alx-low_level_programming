#include "main.h"

/**
 * binary_to_unit - binary to int
 *@b: binary number
 *Return: the int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number;
	int length, basetwo;

	if (!b)
		return (0);

	number = 0;

	for (length = 0; b[length] != '\0'; length++)
		length++;

	for (length--, basetwo = 1; length >= 0; length--, basetwo *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}

		if (b[length] & 1)
		{
			number += basetwo;
		}
	}

	return (number);
}
