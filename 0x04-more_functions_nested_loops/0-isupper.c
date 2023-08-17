#include "main.h"

/**
 * _isupper - function that check the uppercase letters
 *
 * @c: is the charcter
 *
 * Return: 1 is upper 0 if it other
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
