#include"main.h"

/**
 * _memset - fills memory
 * @s: str
 * @b: the filling byte
 * @n: the length of the buffer
 * Return: new str
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
