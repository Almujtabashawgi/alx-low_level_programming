#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of the memory
 *
 * Return: pointer address
 */
void *malloc_checked(unsigned int b)
{
	void *space;

	space = malloc(b);
	if (space == NULL)
		exit(98);
	return (space);
}
