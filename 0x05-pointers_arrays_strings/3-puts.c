#include"main.h"

/**
 * _puts - a function that prints a string
 * @str: the string
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar("\n");
}


