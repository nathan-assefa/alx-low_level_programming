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
unsigned int *byte;
int i, total = 0;

if (nmemb == 0 || size == 0)
{
return NULL;
}

byte = (unsigned int *) malloc(nmemb * sizeof(size));
if (byte == NULL)
{
return NULL;
}
while (byte[total] < (nmemb * sizeof(size)))
total++;


for (i = 0; i < total; i++)
{
byte[i] = 0;
}
return byte;
}
