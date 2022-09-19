#include "main.h"

/**
 * swap_int- swapping a number
 *
 * @a: argument
 * @b: argument
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
