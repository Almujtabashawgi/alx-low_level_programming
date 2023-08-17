#include "main.h"

/**
 * print_line - a function that draws a stright line in the terminal
 *
 * @n: the integer
 * Return: Always 0
 */

void print_line(int n)
{
	int ln;
	if (n == 0)
		_putchar('\n');
	else
	{
		for (ln = 1; ln <= n; ln++)
			_putchar('_');
		_putchar('\n');
	}
}
