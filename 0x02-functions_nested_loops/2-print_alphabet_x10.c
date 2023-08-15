#include"main.h"

/*
 *
 *Description: a function that prints 10 times the alphabet
 */

void print_alphabet_x10.c(void)
{
	int line, ch;

	for (line = 0; line <= 9; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
