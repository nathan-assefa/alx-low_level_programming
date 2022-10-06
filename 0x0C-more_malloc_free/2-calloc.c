#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an
 * array, using malloc
 *
 * @nmemb: paramter
 * @size: paramter
 * Return: void*
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *byte;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	byte = calloc(nmemb, size);
	if (byte == NULL)
	{
		return (NULL);
	}
	return (byte);
}
