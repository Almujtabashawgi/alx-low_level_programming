#include"main.h"

/**
 * print_triangle -  a function that prints a triangle, followed by a new line
 *
 * @size:  is the size of the triangle
 */

void print_triangle(int size);
{
	int h, i;

	if (size > 0)
		_putchar('\n');
	else
	{
		for (h = 1; h <= size; h++)
		{
			for (i = 1; i <= size; i--)
			{
				if ((h + i) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
