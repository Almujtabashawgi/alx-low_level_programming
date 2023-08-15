#include "main.h"

/**
 * print_alphabet - utilizes on the
 *
 * Description:  a function that prints 10 times the alphabet, in lowercase
 */

void print_alphabet(void)
{
	int line, ch;

	for (line = 0; line <= 9; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
