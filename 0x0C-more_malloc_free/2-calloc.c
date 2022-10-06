#include "main.h"
#include <stdlib.h>

/**
 * _colloc- a function that allocates memory for an
 * array, using malloc
 *
 * @nmemb: paramter
 * @size: paramter
 * Return: void*
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    int *byte;

    byte = calloc(nmemb, size);
    return byte;
}