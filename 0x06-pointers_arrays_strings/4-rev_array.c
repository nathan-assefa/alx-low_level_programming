#include "main.h"

/**
 * reverse_array- Reversing array order
 * @a: pointer to an array
 * @n: size of an array
 */
void reverse_array(int *a, int n)
{
	char tmp;
	int i, len2;

	len2 = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[len2];
		a[len2] = tmp;
		len2 -= 1;
	}
}
