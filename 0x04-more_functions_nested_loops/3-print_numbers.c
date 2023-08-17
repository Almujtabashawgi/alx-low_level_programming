#include "main.h"

/**
 * print_numbers - a function that prints the numbers
 *
 * Return: 0 Always
 */

void print_numbers(void)
{
	int num = 0;

	do {
		_putchar(num + 48);
		num++;
	} while (num >= 0 && num <= 9);
	_putchar('\n');
}
