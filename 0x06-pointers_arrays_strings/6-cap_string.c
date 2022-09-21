#include <stdio.h>

/**
 * cap_string - Making uppercae
 * @x: parameter
 * Return: string
 */
char *cap_string(char *x)
{
	char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	int len = 13;
	int a = 0, i;

	while (x[a])
	{
		i = 0;

		while (i < len)
		{
			if ((a == 0 || x[a - 1] == spc[i]) && x[a] >= 'a' && x[a] <= 'z')
			{
				x[a] = x[a] - 32;
			}

			i++;
		}
		a++;
	}
	return (x);
}

