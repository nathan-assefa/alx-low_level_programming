#include "main.h"
#include <stdlib.h>

/**
<<<<<<< HEAD
 * _calloc - a function that allocates memory for an
=======
 * _calloc- a function that allocates memory for an
>>>>>>> d32b9f6a36776a82dadb2aac0bf927973050e6fb
 * array, using malloc
 *
 * @nmemb: paramter
 * @size: paramter
 * Return: void*
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *byte;
unsigned int i;

if (nmemb == 0 || size == 0)
{
return (NULL);
}

byte = malloc(nmemb * size);
if (byte == NULL)
{
return (NULL);
}

for (i = 0; i < (nmemb * size); i++)
{
byte[i] = 0;
}
return (byte);
}
