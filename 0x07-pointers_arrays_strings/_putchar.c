#include <unistd.h>
#include "main.h"

/**
 * _putchar - Writes the char c to std
 * @c: the charator to print
 *
 * Return: on success 1.
 *         on error, -1 is returend,
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
