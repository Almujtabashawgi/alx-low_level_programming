#include"main.h"

/**
*_strcat - function that concatenates two strings.
*@dest: pointer to destination string.
*@src: pointer to source string.
*
*Return: pointer to destination string.
 */

char *_strcat(char *dest, char *src)
{
	int len, c;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	for (c = 0; src[c] != '\0'; c++, len++)
	{
		dest[len] = src[c];
	}
	dest[len] = '\0';
	return (dest);
}
