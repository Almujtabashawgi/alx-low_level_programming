#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Entry Point
 * @n: variadic inputs
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int sum = 0;

	va_start(list, n);

	if (n == 0)
		return (0);

	for (i = 0; i <= n; i++)
	{
		sum += va_arg(list, int);
	}

	va_end(list);

	return (sum);
}

