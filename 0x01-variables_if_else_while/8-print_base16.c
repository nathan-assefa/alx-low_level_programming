#include <stdio.h>

/**
 * main - Entery point
 *
 * Return: 0 when the program is completed
 */
int main(void)
{
	char low = 'a';
	int num = 48;

	while (low <= 'f')
	{

		while (num <= 57)
		{
			putchar(num);
			num++;
		}

		putchar(low);
		low++;
	}

	putchar('\n');
	return (0);
}

