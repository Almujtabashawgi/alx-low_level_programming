#include"main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 *
 * @n: the number of times the char \ should print
 *
 */

void print_diagonal(int n)
{
	int p, s;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (p = 0; p <= n; p++)
		{
			for (s = 0; s <= p; s++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
