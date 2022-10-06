#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - printing number
* @b: paramter
* * Return: void *
*/
void *malloc_checked(unsigned int b)
{
	void *space;

	space = malloc(b);
	if (space == NULL)
		exit(98);

	return (space);
}
