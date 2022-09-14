#include "main.h"

/**
 * jack_bauer: a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 *
 * Description: this function prints time
 * Return: 0
 */
void jack_bauer(void)
{
	int sec1, sec2, tim1, tim2;

	tim1 = 0;
	while (tim1 <= 2)
	{
		tim2 = 0;

		while (tim2 <= 3)
		{
			sec1 = 0;

			while (sec1 <= 5)
			{
				sec2 = 0;

				while (sec2 <= 9)
				{
					_putchar(tim1 + '0');
					_putchar(tim2 + '0');
					_putchar(':');
					_putchar(sec1 + '0');
					_putchar(sec2 + '0');
					_putchar('\n');
					sec2++;
				}

				sec1++;
			}

			tim2++;
		}

		tim1++;
	}

}
