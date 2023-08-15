#include"main.h"

/**
 * _islower - function of check
 *
 * Description:'c' a function that checks for lowercase character.
 *
 * Return: 1 if 'c' is lowercase otherwise Always 0 (Success)
 *
 * @c: checks input of function
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
