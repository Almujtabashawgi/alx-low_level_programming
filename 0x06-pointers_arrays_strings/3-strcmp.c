#include "main.h"
/**
 *_strcmp - compares two strings.
 *@s1: pointer to first string.
 *@s2: pointer to second string.
 *
 *Return: value less than 0 if string is less than the other.
 *value greater than 0 if string is greater than the other.
 *0 if strings are equal.
 */
int _strcmp(char *s1, char *s2)
{
	int count;

	count = 0;
	while (*s1)
	{
		if (*s1 != *s2)
		{
			count = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (count);
}
