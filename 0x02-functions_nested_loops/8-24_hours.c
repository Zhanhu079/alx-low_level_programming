#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 * Return: void
 */
void jack_bauer(void)
{
	int hour, minute, i;

	char str[6];

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			str[0] = hour / 10 + '0';
			str[1] = hour % 10 + '0';
			str[2] = ':';
			str[3] = minute / 10 + '0';
			str[4] = minute % 10 + '0';
			str[5] = '\n';

			for (i = 0; i < 6; i++)
			{
				_putchar(str[i]);
			}
		}
	}
}
