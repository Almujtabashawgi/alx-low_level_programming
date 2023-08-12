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
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	char Ch = 'A';
	while (Ch <= 'Z')
	{
		putchar(Ch);
		Ch++;
	}
	putchar('\n');

	return (0);
}
