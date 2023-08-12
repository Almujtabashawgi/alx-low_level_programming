#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all alphabet
 *
 * Return: Always 0(success)
 */

int main(void)
{
	char ch = 'a';

	while (ch < 'e')
	{
		putchar(ch);
		ch++;
	}
	while ('e' > ch >'q')
	{
		putchar(ch);
		ch++;
	}
	while (ch > 'q')
	{
		putschar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
