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
	while (ch <= 'a')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}

