#include "main.h"

/**
 * leet- Number
 * @x: parameter
 * Return: string
 */
char *leet(char *x)
{
	int index1 = 0, index2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (x[index1])
	{
		for (index2 = 0; index2 < 8; index2++)
		{
			if (x[index1] == leet[index2] || x[index1] - 32 == leet[index2])
				x[index1] = index2 + '0';
		}
		index1++;
	}
	return (x);
}
