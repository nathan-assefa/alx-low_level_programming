#include "main.h"

/**
 * jack_bauer: a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 *
 * Description: this function prints time
 * Return: 0;
 */
void jack_bauer(void)
{
	int hours = 0;
	int minute = 0;
	int hour_reminder;
	int minute_reminder;

	while (hours <= 23)
	{
		    
		while (minute <= 59)
		{
			hour_reminder = hours % 10;
			minute_reminder = minute % 10;
			_putchar((hours / 10) + '0');
			_putchar(hour_reminder + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar(minute_reminder + '0');
			minute++;
			_putchar('\n');
		}

		hours++;
		minute = 0;
	}
}
