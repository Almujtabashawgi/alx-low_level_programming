#include"main.h"

/**
 * _strlen -  a function that returns the length of a string
 *@s: the pointer
 * Return: the length c
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; s++)
		c++;

	return (c);
}
